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
    
    int solve(ListNode* head)
    {
        int n=0;
        
        while(head!=NULL)
        {
            head=head->next;
            n++;
        }
        
        return n;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        if(head==NULL || head->next==NULL)
            return NULL;
        
        int l=solve(head);
        
        if(l==n)
            return head->next;
        
        int d=l-n-1;
        
        ListNode* p=head;
        
        while(d>0)
        {
            head=head->next;
            d--;
            
        }

        head->next=head->next->next;
        
        return p;
    }
};