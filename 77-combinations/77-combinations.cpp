class Solution {
public:
    
    vector<vector<int>> ans;
    
    void solve(vector<int> v,int n,int k,int i)
    {
        if(i>n || v.size()==k)
        {
            if(v.size()==k)
            {
                ans.push_back(v);
                return;
            }
            return;
        }
        
        for(int j=i;j<=n;j++)
        {
            v.push_back(j);
            solve(v,n,k,j+1);
            v.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        
        vector<int> v;
        
        solve(v,n,k,1);
        
        return ans;
    }
};