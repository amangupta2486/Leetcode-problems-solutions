class Solution {
public:
    
    int dp[205][205];
    
    int solve(vector<vector<int>>& g,int i,int j,int n,int m)
    {
        if(i>=n || j>=m)
        {
            return INT_MAX;
        }
        
        if(i==n-1 && j==m-1)
        {
            return g[i][j];
        }
        
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        //cout<<g[i][j]<<" ";
        
        return  dp[i][j]=g[i][j]+min(solve(g,i+1,j,n,m),solve(g,i,j+1,n,m));
    }
    int minPathSum(vector<vector<int>>& g) {
        
        int n=g.size();
        int m=g[0].size();
        
        memset(dp,-1,sizeof(dp));
        
        return solve(g,0,0,n,m);
    }
};