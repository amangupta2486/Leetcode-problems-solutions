class Solution {
public:
    
    set<vector<int>> s;
    
    void solve(vector<int>& a,int i,int n)
    {
        if(i==n)
        {
            s.insert(a);
            return;
        }
        
        for(int j=i;j<n;j++)
        {
            swap(a[i],a[j]);
            solve(a,i+1,n);
            swap(a[i],a[j]);
        }
    }
    
    vector<vector<int>> permuteUnique(vector<int>& a) {
        
        int n=a.size();
        
        solve(a,0,n);
        
        vector<vector<int>> ans;
        
        for(auto x:s)
        {
            ans.push_back(x);
        }
        
        return ans;
    }
};