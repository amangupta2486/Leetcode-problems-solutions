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
        
        ListNode* p;
        ListNode* q;
        
        if(n>m)
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
            if(p==NULL)
            {
                return p;
            }
            p=p->next;
        }
        
        while(p!=q && p!=NULL && q!=NULL)
        {
            p=p->next;
            q=q->next;
        }
        
        if(p==NULL || q==NULL)
        {
            return NULL;
        }
        
        return p;
    }
};