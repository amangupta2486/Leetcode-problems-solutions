class Solution {
public:
    
    vector<vector<int>> ans;
    
    void solve(vector<int>& c,vector<int> v,int i,int n,int s,int t)
    {
        if(i==n || s==t)
        {
            if(s==t)
            {
                ans.push_back(v);
            }
            return;
        }
        
        if(s+c[i]<=t)
        {
            v.push_back(c[i]);
            solve(c,v,i,n,s+c[i],t);
            v.pop_back();
        }
        
        solve(c,v,i+1,n,s,t);
        
    }
    
    vector<vector<int>> combinationSum(vector<int>& c, int t) {
        
        int n=c.size();
        vector<int> v;
        
        solve(c,v,0,n,0,t);
        
        return ans;
    }
};