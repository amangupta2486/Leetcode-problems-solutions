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
    
    int len(ListNode* head)
    {
        int n=0;
        
        while(head!=NULL)
        {
            n++;
            head=head->next;
        }
        
        return n;
    }
    
    ListNode* swapPairs(ListNode* head) {
        
        int n=len(head);
        
        if(n<=1)
        {
            return head;
        }
        
        if(n%2!=0)
        {
            n--;
        }
        
        ListNode* r=head;
            
        for(int i=0;i<n;i+=2)
        {
            ListNode* p=head;
            
            head=head->next;
            
            ListNode* q=head;
            
            head=head->next;
            
            swap(p->val,q->val);
        }
        
        return r;
    }
};