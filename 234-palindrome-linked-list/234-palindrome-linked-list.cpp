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
        
        while(curr)
        {
            nxt=curr->next;
            curr->next=prev;
            
            prev=curr;
            curr=nxt;
        }
        
        return prev;
    }
    
    int Length(ListNode* head)
    {
        int n=0;
        
        while(head)
        {
            head=head->next;
            n++;
        }
        
        return n;
    }
    bool isPalindrome(ListNode* head) {
        
        if(head==NULL || head->next==NULL)
        {
            return 1;
        }
        
        int n=Length(head);
        
        ListNode* p=head;
        ListNode* q;
        
        ListNode* slow=head;
        ListNode* fast=head;
        
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        
        if(n%2==1)
        {
            q=reverse(slow->next);
        }
        else
        {
            q=reverse(slow);
        }
        
        while(p && q)
        {
            if(p->val != q->val)
            {
                return 0;
            }
            //cout<<1<<" ";
            p=p->next;
            q=q->next;
        }
        
        return 1;
    }
};