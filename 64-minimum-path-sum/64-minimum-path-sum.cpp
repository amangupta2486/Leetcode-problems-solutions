class Solution {
public:
    
    int n,m;
    
    int dp[205][205];
    
    int solve(int i,int j,vector<vector<int>>& g)
    {
        if(i==n-1 && j==m-1)
        {
            return g[i][j];
        }
        
        if(i>=n  || j>=m)
        {
            return 100000;
        }
        
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        
        return dp[i][j] = g[i][j] + min(solve(i+1,j,g),solve(i,j+1,g));
    }
    
    int minPathSum(vector<vector<int>>& g) {
        
        n=g.size();
        m=g[0].size();
        
        memset(dp,-1,sizeof(dp));
        
        return solve(0,0,g);
    }
};