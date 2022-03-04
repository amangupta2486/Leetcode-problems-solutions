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
        
        ListNode* p = new ListNode(1);
        ListNode* q=p;
        
        int c=0;
        
        while(l1 || l2)
        {
            int a =l1 ? l1->val : 0;
            int b=l2 ? l2->val : 0;
            
            int s=(a+b+c)%10;
            c=(a+b+c)/10;
            
            //cout<<c<<" ";
            
            if(l1)
            l1=l1->next;
            
            if(l2)
            l2=l2->next;
            
            p=p->next=new ListNode(s);
        }
        
        if(c)
        {
            p=p->next=new ListNode(c);
        }
        
        return q->next;
    }
};