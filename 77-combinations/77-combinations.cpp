class Solution {
public:
    
    vector<vector<int>> ans;
    
    void solve(vector<int> v,int i,int n,int k)
    {
        if(i==n+1 || v.size()==k)
        {
            if(v.size()==k)
            ans.push_back(v);
            
            return;
        }
        
        for(int j=i;j<=n;j++)
        {
            v.push_back(j);
            solve(v,j+1,n,k);
            v.pop_back();
        }
    }
    
    vector<vector<int>> combine(int n, int k) {
        
        vector<int> v;
        
        solve(v,1,n,k);
        
        return ans;
    }
};