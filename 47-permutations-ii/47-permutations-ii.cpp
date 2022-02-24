class Solution {
public:
    
      void solve(int i,int n,vector<int> a,vector<vector<int>> &ans)
    {
        if(i>=n)
        {
            auto it=find(ans.begin(),ans.end(),a);
            
            if(it==ans.end())
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
    
    
    vector<vector<int>> permuteUnique(vector<int>& a) {
        
        int n=a.size();
        
        vector<vector<int>> ans;
        
        sort(a.begin(),a.end());
        
        solve(0,n,a,ans);
        
        return ans;
    }
};