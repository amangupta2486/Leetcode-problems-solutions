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
            head=head->next;
            n++;
        }
        
        return n;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        if(head==NULL)
        {
            return NULL;
        }
        
        int l=len(head);
        
        if(l==n)
        {
            return head->next;
        }
        
        int d=l-n-1;
        
        ListNode* p=head;
        ListNode* q=p;
        
        while(d--)
        {
            p=p->next;
        }
        
        p->next=p->next->next;
        
        return q;
    }
};