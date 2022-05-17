class Solution {
public:
    int uniquePaths(int n, int m) {
        
        int dp[n+1][m+1];
        memset(dp,0,sizeof(dp));
        
        for(int i=0;i<=n;i++)
        {
            dp[i][m]=1;
        }
        
        for(int j=0;j<=m;j++)
        {
            dp[n][j]=1;
        }
        
        for(int i=n-1;i>=1;i--)
        {
            for(int j=m-1;j>=1;j--)
            {
                dp[i][j]= dp[i+1][j]+dp[i][j+1];
            }
        }
        
        return dp[1][1];
    }
};