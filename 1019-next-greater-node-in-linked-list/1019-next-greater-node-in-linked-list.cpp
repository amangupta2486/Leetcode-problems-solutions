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
    vector<int> nextLargerNodes(ListNode* head) {

        vector<int> a;
        
        while(head!=NULL)
        {
            a.push_back(head->val);
            head=head->next;
        }
        
        stack<int> s;
        
        int n=a.size();
        
        vector<int> ans(n);
    
        for(int i=n-1;i>=0;i--)
        {
            while(!s.empty() && s.top()<=a[i])
            {
                s.pop();
            }
            
            if(s.empty())
            {
                ans[i]=0;
            }
            else
            {
                ans[i]=s.top();
            }
            
            s.push(a[i]);
        }
        
        return ans;
    }
};