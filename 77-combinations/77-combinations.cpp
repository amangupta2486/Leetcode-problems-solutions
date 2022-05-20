class Solution {
public:
    vector<vector<int>> ans;
    
    void solve(int n,int k,int i,vector<int> v)
    {
        if(i>n || v.size()==k)
        {
            if(v.size()==k)
            {
                ans.push_back(v);
            }
            return;
            
        }
        
        for(int j=i;j<=n;j++)
        {
            v.push_back(j);
            solve(n,k,j+1,v);
            v.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        
        vector<int> v;
        
        solve(n,k,1,v);
        
        return ans;
    }
};