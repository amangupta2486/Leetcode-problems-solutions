/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    
    ListNode* merge(ListNode* l1, ListNode* l2) {
        
        if(l1==NULL)
        {
            return l2;
        }
        if(l2==NULL)
        {
            return l1;
        }
        
        ListNode* p=new ListNode(0);
        ListNode* q=p;
        
        while(l1!=NULL && l2!=NULL)
        {
            if(l1->val<=l2->val)
            {
                p->next=l1;
                p=p->next;
                l1=l1->next;
            }
            else
            {
                p->next=l2;
                p=p->next;
                l2=l2->next;
            }
        }
        
        if(l1!=NULL)
        {
            p->next=l1;
        }
        if(l2!=NULL)
        {
            p->next=l2;
        }
        
        return q->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& l) {
        
        int n=l.size();
        
        if(n==0)
        {
            return NULL;
        }
        
        ListNode* p=l[0];
        
        for(int i=1;i<n;i++)
        {
            p=merge(l[i],p);
        }
        
        return p;
    }
};