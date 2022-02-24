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
    
     ListNode* middleNode(ListNode* head) {
        
        ListNode* slow=NULL;
        ListNode* fast=head;
        
        while(fast && fast->next)
        {
            slow=(slow==NULL)? head : slow->next;
            fast=fast->next->next;
        }

         ListNode* p = slow->next;
         slow->next= NULL;
         
        return p;
         
    }
    
     ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        ListNode* p=new ListNode(1);
        ListNode* q= p;
        
        while(l1!=NULL && l2!=NULL)
        {
            if(l1->val<=l2->val)
            {
                p=p->next=new ListNode(l1->val);
        
                l1=l1->next;
            }
            else
            {
                p=p->next=new ListNode(l2->val);
                
                l2=l2->next;
            }
        }
        
        while(l1!=NULL)
        {
             p=p->next=new ListNode(l1->val);

             l1=l1->next;
        }
        
        while(l2!=NULL)
        {
            p=p->next=new ListNode(l2->val);

            l2=l2->next;
        }
        
        return q->next;
    }
    
    
    ListNode* sortList(ListNode* head) {
        
        if(head==NULL || !head->next)
        {
            return head;
        }
        
        ListNode* mid = middleNode(head);
        
        ListNode* left =sortList(head);
        
        ListNode* right =sortList(mid);
        
        return mergeTwoLists(left,right);
    }
};