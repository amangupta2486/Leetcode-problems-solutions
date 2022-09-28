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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* temp=new ListNode();
        temp->next=head;
        
        ListNode* p=temp;
        ListNode* q=temp;

        while(n>0)
        {
            p=p->next;
            n--;
        }

        while(p->next!=NULL)
        {
            p=p->next;
            q=q->next;
            
        }
        
        q->next=q->next->next;
        
        return temp->next;
    }
};