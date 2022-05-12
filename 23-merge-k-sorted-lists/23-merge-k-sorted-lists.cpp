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
    
     ListNode* merge(ListNode* l1,ListNode* l2)
     {
         if(l1==NULL)
         {
             return l2;
         }
         if(l2==NULL)
         {
             return l1;
         }
         
         ListNode* x=new ListNode(0);
         ListNode* y=x;
         
         while(l1 && l2)
         {
             if(l1->val <= l2->val)
             {
                 x->next=l1;
                 l1=l1->next;
                 x=x->next;
             }
             else
             {
                 x->next=l2;
                 l2=l2->next;
                 x=x->next;
             }
         }
         
         if(l1)
         {
             x->next=l1;
         }
         if(l2)
         {
             x->next=l2;
         }
         
         return y->next;
     }
    ListNode* mergeKLists(vector<ListNode*>& l) {
        
        int n=l.size();
        
        if(n==0)
        {
            return NULL;
        }
        
        if(n==1)
        {
            return l[0];
        }
        
        ListNode* p=new ListNode(0);
        ListNode* q=p;
        p->next=merge(l[0],l[1]);
        p=p->next;
        
        for(int i=2;i<n;i++)
        {
           p=merge(p,l[i]);
        }
        
        return p;

    }
};