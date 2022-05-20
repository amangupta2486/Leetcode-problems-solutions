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
    
     ListNode* reverse(ListNode* head)
    {
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* nxt;
        
        while(curr!=NULL)
        {
            nxt=curr->next;
            curr->next=prev;
            
            prev=curr;
            curr=nxt;
        }
        
        return prev;
    }
    
    ListNode* addTwoNumbers(ListNode* p, ListNode* q) {
        
        ListNode* l1=reverse(p);
        ListNode* l2=reverse(q);
        
        ListNode* a=new ListNode(0);
        ListNode* b=a;
        int c=0;
        
        while(l1 || l2)
        {
            int x=l1 ? l1->val:0;
            int y=l2 ? l2->val:0;
            
            int s=(x+y+c)%10;
            
            c=(x+y+c)/10;
            
            if(l1)
            {
                l1=l1->next;
            }
            if(l2)
            {
                l2=l2->next;
            }
            
            a=a->next=new ListNode(s);
        }
        
        if(c)
        {
            a=a->next=new ListNode(c);
        }
        
        return reverse(b->next);
    }
};