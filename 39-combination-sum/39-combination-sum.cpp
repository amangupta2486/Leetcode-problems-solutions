class Solution {
public:
    vector<vector<int>> ans;
    
    void solve(int i,int n,vector<int>& a, int t,int s,vector<int> v)
    {
        if(i==n)
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
            solve(i,n,a,t,s+a[i],v);
            v.pop_back();
        }
        
        solve(i+1,n,a,t,s,v);
    }
    
    vector<vector<int>> combinationSum(vector<int>& a, int t) {
        
        int n=a.size();
        vector<int> v;
            
        solve(0,n,a,t,0,v);
        
        return ans;
    }
};