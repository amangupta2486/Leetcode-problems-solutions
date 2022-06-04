class Solution {
public:
    int numSquares(int n) {
        
        vector<int> dp(n+1,0);
        //memset(dp,0,sizeof(dp));
        
        dp[0]=0;
        dp[1]=1;
        
        for(int i=1;i<=n;i++)
        {
            int mi=INT_MAX;
            for(int j=1;j*j<=i;j++)
            {
                mi=min(mi,dp[i-(j*j)]);
            }
            
            dp[i]=1+mi;
        }
        
        return dp[n];
    }
};