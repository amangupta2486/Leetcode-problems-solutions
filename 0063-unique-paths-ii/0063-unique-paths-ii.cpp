class Solution {
public:
    
    int dp[105][105];
    
    int solve(int i,int j,int n,int m,vector<vector<int>>& g)
    {
        if(i>=n || j>=m || g[i][j]==1)
        {
            return 0;
        }
        
        if(i==n-1 && j==m-1)
        {
            return 1;
        }
        
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        
        return dp[i][j]=solve(i+1,j,n,m,g)+solve(i,j+1,n,m,g);
    }
    
    int uniquePathsWithObstacles(vector<vector<int>>& g) {
        
        int n=g.size();
        int m=g[0].size();
        
        memset(dp,-1,sizeof(dp));
        
        return solve(0,0,n,m,g);
    }
};