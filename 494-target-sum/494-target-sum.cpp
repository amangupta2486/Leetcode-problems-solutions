class Solution {
public:
    int findTargetSumWays(vector<int>& a, int t) {
        
        int n=a.size();
        
        int s=0;
        
        for(int i=0;i<n;i++)
        {
            s+=a[i];
        }
        
        if(t>s)
        {
            return 0;
        }
        
        int x=(s-t)/2;
        
        if(s!=(2*x)+t)
        {
            return 0;
        }
        
        int dp[n+1][x+1];
        memset(dp,0,sizeof(dp));
        
        for(int i=0;i<=n;i++)
        dp[i][0]=1;
        
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<=x;j++)
            {
                if(a[i-1]<=j)
                {
                    dp[i][j]= dp[i-1][j-a[i-1]] + dp[i-1][j];
                }
                else
                {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        
        return dp[n][x];
    }
};