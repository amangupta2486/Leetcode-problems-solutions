class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& a) {
        
        int n=a.size();
        
        stack<int> s;
        vector<int> ans(n,0);
        
        for(int i=n-1;i>=0;i--)
        {
            while(!s.empty() && a[s.top()]<=a[i])
            {
                s.pop();
            }
            
            if(s.empty())
            {
                ans[i]=0;
            }
            else
            {
                ans[i]=s.top()-i;
            }
            s.push(i);
        }
        
        return ans;
    }
};