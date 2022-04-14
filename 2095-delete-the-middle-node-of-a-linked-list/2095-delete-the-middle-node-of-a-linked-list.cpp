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
    ListNode* deleteMiddle(ListNode* head) {
        
        
        if(head==NULL || head->next==NULL)
            return NULL;
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast->next && fast->next->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        
        if(fast->next)
            slow=slow->next;
        
        fast=head;
        //ListNode* p = head;
        while(fast->next!=slow)
        {
            fast=fast->next;
        }
        
        fast->next=fast->next->next;
        
        return head;
    }
};

/*
Input
[7,5,5,6,3,6,7,3,4,8,10,10,7,1,1,7,5,3,4,9,9,4,9,7,4]
Output
[7,5,5,6,3,6,3,4,8,10,10,7,1,1,7,5,3,4,9,9,4,9,7,4]
Expected
[7,5,5,6,3,6,7,3,4,8,10,10,1,1,7,5,3,4,9,9,4,9,7,4]

*/