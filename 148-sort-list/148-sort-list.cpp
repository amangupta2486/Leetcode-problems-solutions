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
        ListNode* p=new ListNode(0);
        ListNode* q=p;
        
        while(l1 && l2)
        {
            if(l1->val <= l2->val)
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
        
        if(l1)
        {
            p->next=l1;  
        }
        
        if(l2)
        {
            p->next=l2;
        }
        
        return q->next;
    }
    ListNode* middle(ListNode* head)
    {
        ListNode* slow=NULL;
        ListNode* fast=head;
        
        while(fast && fast->next)
        {
            slow =(slow==NULL)?head :slow->next;
            fast=fast->next->next;
        }
        
        ListNode* mid=slow->next;
        
        slow->next=NULL;
        
        return mid;
        
    }
    ListNode* sortList(ListNode* head) {
        
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        
        ListNode* mid=middle(head);
        //cout<<mid->val<<endl;
        ListNode* l=sortList(head);
        ListNode* r=sortList(mid);
        
        return merge(l,r);
    }
};