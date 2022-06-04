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
    ListNode* sortList(ListNode* head) {
        
        vector<int> v;
        
        while(head!=NULL)
        {
            v.push_back(head->val);
            head=head->next;
        }
        
        ListNode* p=new ListNode(0);
        ListNode* q=p;
        
        int i=0;
        sort(v.begin(),v.end());
        
        while(i<v.size())
        {
            p->next=new ListNode(v[i]);
            p=p->next;
            i++;
        }
        
        return q->next;
    }
};