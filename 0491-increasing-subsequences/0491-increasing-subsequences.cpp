class Solution {
public:
    
    set<vector<int>> ans;
    
    void solve(int i,int n,vector<int> &a,vector<int> v)
    {
        if(i==n)
        {
            if(v.size()>1)
            {
                ans.insert(v);
            }
            return;
        }
        
        solve(i+1,n,a,v);
        
        if(!v.empty() && v.back()<=a[i])
        {
            v.push_back(a[i]);
            solve(i+1,n,a,v);
        }
        
        if(v.empty())
        {
            v.push_back(a[i]);
            solve(i+1,n,a,v);
        }
    }
    
    vector<vector<int>> findSubsequences(vector<int>& a) {
        
        int n=a.size();
        
        vector<int> v;
        
        solve(0,n,a,v);
        
        vector<vector<int>> res;
        
        for(auto x:ans)
        {
            res.push_back(x);
        }
        
        return res;
    }
};