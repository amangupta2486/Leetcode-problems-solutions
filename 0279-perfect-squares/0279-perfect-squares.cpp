class Solution {
public:
    int numSquares(int n) {
        
        vector<int> dp(n+1,0);
        
        dp[1]=1;
        
        for(int i=2;i<=n;i++)
        {
            int mi=i;
            
            for(int j=1;j*j<=i;j++)
            {
                mi=min(mi,dp[i-(j*j)]);
            }
            
            dp[i]=mi+1;
        }
        
        return dp[n];
    }
};