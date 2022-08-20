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
    
    ListNode *getIntersectionNode(ListNode *l1, ListNode *l2) {
        
        int n=solve(l1);
        int m=solve(l2);
        
        ListNode* p;
        ListNode* q;
        
        int d;
        
        if(n>m)
        {
            p=l1;
            q=l2;
            
            d=n-m;
            
        }
        else
        {
            p=l2;
            q=l1;
            
            d=m-n;
            
        }
        
         while(d>0)
        {
            if(p==NULL)
            {
                return NULL;
            }

            p=p->next;
            d--;
        }
        
        while(p!=q)
        {
            p=p->next;
            q=q->next;
        }
        
        return p;
        
    }
};