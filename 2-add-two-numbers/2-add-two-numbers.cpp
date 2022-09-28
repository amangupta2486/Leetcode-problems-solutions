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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int c=0;
        
        ListNode* p=new ListNode(0);
        ListNode* q=p;
        
        
        while(l1 || l2)
        {
            int x=(l1!=NULL) ? l1->val : 0;
            int y=(l2!=NULL) ? l2->val : 0;
            
            int s=x+y+c;
            
            c=s/10;
            s=s%10;
            
            if(l1!=NULL)
            {
                l1=l1->next;
            }
            
            if(l2!=NULL)
            {
                l2=l2->next;
            }
            
            p=p->next=new ListNode(s);
        }
        
        
        if(c)
        {
            p->next=new ListNode(c);
        }
        
        return q->next;
    }
};