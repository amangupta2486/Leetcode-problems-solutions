class Solution {
public:
    vector<vector<int>> ans;
    
    void solve(int i,int n,int s,vector<int>& can, int t,vector<int> v)
    {
        if(i>=n || s==t)
        {
            if(s==t)
            {
                ans.push_back(v);
            }
            return;
        }
        
        if(can[i]+s<=t)
        {
            v.push_back(can[i]);
            solve(i,n,s+can[i],can,t,v);
            v.pop_back();
        }
        
        solve(i+1,n,s,can,t,v);
    }
    
    vector<vector<int>> combinationSum(vector<int>& can, int t) {
        
        int n=can.size();
        vector<int> v;
        
        solve(0,n,0,can,t,v);
        
        return ans;
    }
};