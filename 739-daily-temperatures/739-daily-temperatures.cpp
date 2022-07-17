class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        
        stack<int> s;
        
        int n=temp.size();
        
        vector<int> ans(n);
        
        for(int i=n-1;i>=0;i--)
        {
            while(!s.empty() && temp[s.top()]<=temp[i])
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