class Solution {
public:
    bool canPartition(vector<int>& a) {
        
        int s=0;
        int n=a.size();
        
        for(int i=0;i<n;i++)
        {
            s+=a[i];
        }
        
        if(s&1)
        {
            return 0;
        }
        
        s=s/2;
        
        int dp[n+1][s+1];
        memset(dp,0,sizeof(dp));
        
        dp[0][0]=1;
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=s;j++)
            {
                if(a[i-1]<=j)
                dp[i][j]=dp[i-1][j-a[i-1]] || dp[i-1][j];
                
                else
                {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        
        return dp[n][s];
    }
};