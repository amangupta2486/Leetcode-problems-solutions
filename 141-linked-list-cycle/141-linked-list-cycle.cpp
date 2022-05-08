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
    bool hasCycle(ListNode *head) {
        
//         ListNode* slow=head;
//         ListNode* fast=head;
        
//         do{
//             slow=slow->next;
//             fast=fast->next->next;
//         }while(fast->next && fast->next->next && slow!=fast);
        
//         return 
        
        unordered_map<ListNode*,bool> mp;
        
        while(head!=NULL)
        {
            if(mp[head])
            {
                return true;
            }
            
            mp[head]=1;
            head=head->next;
        }
        
        return 0;
    }
};