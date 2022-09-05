class Solution {
public:
    
    vector<vector<int>> ans;
    
    void solve(int i,int n,vector<int> v,vector<int>& a)
    {
        if(i==n)
        {
            ans.push_back(v);
            return;
        }
        
        v.push_back(a[i]);
        solve(i+1,n,v,a);
        v.pop_back();
        
         solve(i+1,n,v,a);
    }
    
    vector<vector<int>> subsets(vector<int>& a) {
        
        int n=a.size();
        
        vector<int> v;
        
        solve(0,n,v,a);
        
        return ans;
    }
};