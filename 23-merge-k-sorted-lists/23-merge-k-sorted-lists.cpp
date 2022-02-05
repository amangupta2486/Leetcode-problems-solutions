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
    ListNode* mergeKLists(vector<ListNode*>& a) {
        
        priority_queue<int> q;
        
        int n=a.size();
        
        for(auto x:a)
        {
            while(x!=NULL)
            {
                q.push(-1 * x->val);
                x=x->next;
            }
        }
        
        ListNode* p =new ListNode(1);
        ListNode* r=p;
        
        while(!q.empty())
        {    
            p=p->next=new ListNode(-1 * q.top());
            q.pop();
        }
        
        return r->next;
    }
};