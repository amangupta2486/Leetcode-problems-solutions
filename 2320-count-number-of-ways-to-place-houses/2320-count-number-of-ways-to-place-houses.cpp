class Solution {
public:
    int countHousePlacements(int n) {
        
        if(n==1)
        {
            return 4;
        }
        
        int mod= 1e9+7;
        
        int dp[n+2];
        dp[0]=1;
        dp[1]=1;
        
        for(int i=2;i<=n+1;i++)
        {
            dp[i]=dp[i-1]+dp[i-2];
            dp[i]%=mod;
        }
        
        long long a=dp[n+1];
        
        long long ans=(a*a*1ll)%mod;
        
        return ans;
    }
};