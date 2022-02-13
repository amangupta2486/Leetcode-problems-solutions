class Solution {
public:
    
    vector<vector<int>> ans;
    
    void solve(vector<int>& a,int i,int n,vector<int> v)
    {
        if(i==n)
        {
            ans.push_back(v);
            return;
        }
        
        v.push_back(a[i]);
        solve(a,i+1,n,v);
        v.pop_back();
        
        solve(a,i+1,n,v);
    }
    vector<vector<int>> subsets(vector<int>& a) {
        
        int n=a.size();
        
        vector<int> v;
        
        solve(a,0,n,v);
        
        return ans;
    }
};