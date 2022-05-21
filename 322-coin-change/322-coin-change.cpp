class Solution {
public:
    int coinChange(vector<int>& c, int a) {
        
        int n=c.size();
        
        vector<int> dp(a+1,INT_MAX);
        
        dp[0]=0;
        for(int i=1;i<=a;i++)
        {
            int ans=INT_MAX;
            for(int j=0;j<n;j++)
            {
                if(c[j]<=i)
                {
                    ans=min(ans,dp[i-c[j]]);
                }
               // cout<<ans<<" ";
            }

            if(ans<dp[i])
            {
                dp[i]=1+ans;
            }
         
        }

        if(dp[a]==INT_MAX)
        {
            return -1;
        }
        return dp[a];
    }
};