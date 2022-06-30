class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {

        int n=coins.size();
        
        int dp[amount+1];
        dp[0]=0;
        
        for(int i=1;i<=amount;i++)
        {
            int ans=INT_MAX;
            
            for(int j=0;j<n;j++)
            {
                if(coins[j]<=i)
                {
                    ans=min(ans,dp[i-coins[j]]);
                }
            }
            
            if(ans!=INT_MAX)
            {
                dp[i]=1+ans;
            }
            else
            {
                dp[i]=INT_MAX;
            }
        }
        
        if(dp[amount]==INT_MAX)
        {
            return -1;
        }
        
        return dp[amount];
        
    }
};