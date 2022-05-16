class Solution {
public:
    
    vector<vector<int>> ans;
    
    void solve(vector<int>& a,vector<int> v,int s,int i,int t)
    {
        if(i==a.size() || s==t)
        {
            if(s==t)
            {
                ans.push_back(v);
            }
            return;
        }
        
        if(s+a[i]<=t)
        {
            v.push_back(a[i]);
            solve(a,v,s+a[i],i,t);
            v.pop_back();
        }
        
        solve(a,v,s,i+1,t);
    }
    vector<vector<int>> combinationSum(vector<int>& c, int t) {
        
        int n=c.size();
        vector<int> v;
        
        solve(c,v,0,0,t);
        
         return ans;
    }
};