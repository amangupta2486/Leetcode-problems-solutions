/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        int n=solve(headA);
        int m=solve(headB);
        
        ListNode *p,*q;
        
        if(n>=m)
        {
            p=headA;
            q=headB;
        }
        else
        {
            p=headB;
            q=headA;
        }
        
        int d=abs(n-m);
        
        while(d--)
        {
            p=p->next;
        }
        
        while(p!=NULL && q!=NULL)
        {
            if(p==q)
            {
                return p;
            }
            
            p=p->next;
            q=q->next;
        }
        
        return NULL;
    }
};