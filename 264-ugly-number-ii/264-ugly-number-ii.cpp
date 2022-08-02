class Solution {
public:
    int nthUglyNumber(int n) {
        
        int dp[n+2];
        dp[0]=1;
        
        int c2=0,c3=0,c5=0;
        
        for(int i=1;i<=n;i++)
        {
            dp[i]=min({dp[c2]*2,dp[c3]*3,dp[c5]*5});
            
            if(dp[c2]*2==dp[i])
            {
                c2++;
            }
            if(dp[c3]*3==dp[i])
            {
                c3++;
            }
            if(dp[c5]*5==dp[i])
            {
                c5++;
            }
        }
        
        // for(int i=0;i<n;i++)
        // {
        //     cout<<dp[i]<<" ";
        // }
        // cout<<endl;
        return dp[n-1];
    }
};