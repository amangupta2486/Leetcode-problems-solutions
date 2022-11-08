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
    ListNode* reverseEvenLengthGroups(ListNode* head) {
        
        vector<int> ans;
        
        ListNode* p=head;
        
        vector<int> a;
        
        while(p!=NULL)
        {
            a.push_back(p->val);
            p=p->next;
        }
        
        int n=a.size();
        
        int t=1;
        
        int i=0;
        
        while(i<n)
        {
            vector<int> v;
            
            int j=i;
            
            while(j<n && j<i+t)
            {
                v.push_back(a[j]);
                j++;
            }
            
            i=j;
            
            if(v.size()%2==0)
            {
                reverse(v.begin(),v.end());
            }
            
            for(auto x:v)
            {
                ans.push_back(x);
            }
            
            t++;
        }
        
        ListNode* q=new ListNode(0);
        ListNode* r=q;
        
        for(auto x:ans)
        {
            q=q->next=new ListNode(x);
        }
        
        return r->next;
    }
};