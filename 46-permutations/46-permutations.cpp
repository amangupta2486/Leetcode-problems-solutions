class Solution {
public:
    
    void solve(int i,int n,vector<int> a,vector<vector<int>> &ans)
    {
        if(i>=n)
        {
            ans.push_back(a);
            return;
        }
        
        for(int j=i;j<n;j++)
        {
            swap(a[i],a[j]);
            solve(i+1,n,a,ans);
            swap(a[i],a[j]);
        }
    }
    vector<vector<int>> permute(vector<int>& a){
        
        int n=a.size();
        
        vector<vector<int>> ans;
        
        solve(0,n,a,ans);
        
        return ans;
    }
};