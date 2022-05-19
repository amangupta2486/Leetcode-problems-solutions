class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& a) {
        
        int n=a.size();
        
        for(int i=0;i<n;i++)
        {
            a.push_back(a[i]);
        }
        
        stack<int> s;
        
        vector<int> ans(a.size(),0);
        
        for(int i=(2*n)-1;i>=0;i--)
        {
            //cout<<a[i]<<" ";
            while(!s.empty() && s.top()<=a[i])
            {
                s.pop();
            }
            
            if(s.empty())
            {
                ans[i]=-1;
            }
            else
            {
                ans[i]=s.top();
            }
            
            s.push(a[i]);
        }
        
        while(n--)
        {
            ans.pop_back();
        }
        
        return ans;
    }
};