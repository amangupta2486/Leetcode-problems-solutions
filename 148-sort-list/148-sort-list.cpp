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
        
        sort(v.begin(),v.end());
        
        ListNode* p=new ListNode(1);
        ListNode* q=p;
        
        for(int i=0;i<v.size();i++)
        {
            p=p->next= new ListNode(v[i]);
        }
        
        return q->next;
    }
};