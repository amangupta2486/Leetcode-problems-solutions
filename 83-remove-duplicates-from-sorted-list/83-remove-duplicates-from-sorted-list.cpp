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
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        
        ListNode* prev=head;
        ListNode* p=head;
        p=p->next;
        
        while(p)
        {
            if(p->val==prev->val)
            {
                prev->next=p->next;
                p=prev->next;
                
            }
            else
            {
                prev=p;
                p=p->next;
            }
        }
        
        return head;
    }
};