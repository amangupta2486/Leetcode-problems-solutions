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
    
    ListNode* swapNodes(ListNode* head, int k) {
        
        int n=len(head);
        
        if(n<=1)
        {
            return head;
        }
        
        if(k>n)
        k=k%n;
        
        ListNode* p=head;
        ListNode* q=head;
        
        int i=0,j=0;
        
        while(i<k-1)
        {
            p=p->next;
            i++;
        }
        
        while(j<n-k)
        {
            q=q->next;
            j++;
        }
        
        swap(p->val,q->val);
        
        return head;
    }
};