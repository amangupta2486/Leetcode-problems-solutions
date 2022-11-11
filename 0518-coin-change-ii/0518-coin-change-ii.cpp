class Solution {
public:
    int change(int a, vector<int>& c) {
        
        int n=c.size();
        
        int dp[n+1][a+1];
        
        memset(dp,0,sizeof(dp));
        
        for(int i=0;i<=n;i++)
        {
            dp[i][0]=1;
        }
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=a;j++)
            {
                if(c[i-1]<=j)
                {
                    dp[i][j]= dp[i][j-c[i-1]] + dp[i-1][j]; 
                }
                else
                {
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        
        return dp[n][a];
    }
};