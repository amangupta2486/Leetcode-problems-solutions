class Solution {
public:
    
    vector<vector<int>> ans;
    
    void solve(vector<int>&a,vector<int> q,int s,int k,int i,int n)
    {
        if(i==9 || q.size()==k)
        {
            if(s==n && q.size()==k)
            {
                ans.push_back(q);
            }
            return;
        }
        
        if(s+a[i]<=n)
        {
            q.push_back(a[i]);
            solve(a,q,s+a[i],k,i+1,n);
            q.pop_back();
        }
        
        solve(a,q,s,k,i+1,n);
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
      
        vector<int> v,q;
        
        for(int i=1;i<=9;i++)
        {
            v.push_back(i);
        }
        
        solve(v,q,0,k,0,n);
        
        return ans;
    }
};