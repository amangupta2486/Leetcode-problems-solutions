class Solution {
public:
    int minPathSum(vector<vector<int>>& g) {
        
        int n=g.size();
        int m=g[0].size();
        
        int dp[n+1][m+1];
        
        memset(dp,0,sizeof(dp));
        
        for(int i=0;i<=n;i++)
        {
            dp[i][m]=INT_MAX;
        }

        for(int j=0;j<=m;j++)
        {
            dp[n][j]=INT_MAX;
        }
        
        dp[n][m-1]=dp[n-1][m]=0;
        
        for(int i=n-1;i>=0;i--)
        {
            for(int j=m-1;j>=0;j--)
            {
                dp[i][j]=g[i][j]+min(dp[i][j+1],dp[i+1][j]);
            }
        }
        
        return dp[0][0];
    }
};