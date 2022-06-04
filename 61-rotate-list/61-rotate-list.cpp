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
    ListNode* rotateRight(ListNode* head, int k) {
        
        int n=solve(head);
        
        if(n==0 || k%n==0)
        {
            return head;
        }
        
        k=k%n;
        int d=n-k;
        
        ListNode* p=head;
        ListNode* q=p;
        d--;
        
        while(d--)
        {
            head=head->next;
        }
        
        q=head;
        
        
        ListNode* ans=head->next;
        
        while(head->next!=NULL)
        {
            head=head->next;
        }
        
        q->next=NULL;
        head->next=p;
        
        return ans;
    }
};