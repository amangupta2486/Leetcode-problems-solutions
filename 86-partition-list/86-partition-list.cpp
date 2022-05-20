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
    ListNode* partition(ListNode* head, int x) {
        
        if(head==NULL)
        {
            return head;
        }
        
        ListNode* p=new ListNode(0);
        ListNode* q=p;
        
        ListNode* a=new ListNode(0);
        ListNode* b=a;
        
        while(head!=NULL)
        {
            if(head->val<x)
            {
                p->next=head;
                p=p->next;
            }
            else
            {
                a->next=head;
                a=a->next;
            }
            
            head=head->next;
        }
        
        p->next=b->next;
        a->next=NULL;
        
        return q->next;
    }
};