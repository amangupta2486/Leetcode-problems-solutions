class Solution {
public:
    int change(int s, vector<int>& a) {
        
        int n=a.size();
        
        int dp[n+1][s+1];
        memset(dp,0,sizeof(dp));
        
        for(int i=0;i<=n;i++)
        {
            dp[i][0]=1;
        }
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=s;j++)
            {
                if(a[i-1]<=j)
                {
                    dp[i][j] = dp[i][j-a[i-1]] + dp[i-1][j];
                }
                else
                {
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        
        return dp[n][s];
    }
};