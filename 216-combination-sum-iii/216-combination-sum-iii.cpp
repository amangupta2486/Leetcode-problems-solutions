class Solution {
public:
    
    vector<vector<int>> ans;
    
    
    
    void solve(int i,int n,int j,int k,vector<int> v,vector<int> &vis,int s,int t)
    {
        if(i>n || j==k)
        {
            if(j==k &&s==t)
            {
                ans.push_back(v);
            }
            return;
        }
        
        if(s+i<=t)
        {
            v.push_back(i);
            solve(i+1,n,j+1,k,v,vis,s+i,t);
            v.pop_back();
        }
        
        
        solve(i+1,n,j,k,v,vis,s,t);
    }
    
    vector<vector<int>> combinationSum3(int k, int s) {
        
        vector<int> v;
        
        vector<int> vis(10,0);
        
        solve(1,9,0,k,v,vis,0,s);
        
        return ans;
    }
};