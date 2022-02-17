class Solution {
public:
    
    vector<vector<int>> ans;
    
    void solve(vector<int> &a,int t,int i,int n,int s,vector<int> v)
    {
        if(i==n || s==t)
        {
            if(s==t)
            {
                ans.push_back(v);
            } 
            
            return ;
        }
        
        if(s+a[i]<=t)
        {
            v.push_back(a[i]);
            solve(a,t,i,n,s+a[i],v);
            v.pop_back();
        }
        
        solve(a,t,i+1,n,s,v);
    }
    vector<vector<int>> combinationSum(vector<int>& a, int t) {
        
        vector<int> v;
        int n=a.size();
        
        solve(a,t,0,n,0,v);
        
        return ans;
    }
};