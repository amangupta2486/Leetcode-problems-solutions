class Solution {
public:
    
    int dp[105][105];
    
    int solve(vector<vector<int>>& g,int i,int j,int n,int m)
    {
        if(i>=n || j>=m || g[i][j]==1)
        {
            return 0;
        }
        
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        if(i==n-1 && j==m-1)
        {
            return 1;
        }
        
        return dp[i][j]=solve(g,i+1,j,n,m) + solve(g,i,j+1,n,m);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& g) {
        
        int n=g.size();
        int m=g[0].size();
        
        memset(dp,-1,sizeof(dp));
        return solve(g,0,0,n,m);
    }
};