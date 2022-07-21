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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        vector<int> v;
        
        ListNode* p=new ListNode(0);
        ListNode* q=p;
        
        while(head!=NULL)
        {
            v.push_back(head->val);
            head=head->next;
        }
        
        reverse(v.begin()+left-1,v.begin()+right);
        
        for(auto i:v)
        {
            p->next=new ListNode(i);
            p=p->next;
        }
        
        return q->next;
    }
};