class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        
        vector<int> dp(amount+1,0);
        
        int n=coins.size();
        
        for(int i=1;i<=amount;i++)
        {
            int mi=INT_MAX;
            
            for(int j=0;j<n;j++)
            {
                if(coins[j]<=i)
                {
                    mi=min(mi,dp[i-coins[j]]);
                }
            }
            
            if(mi==INT_MAX)
            {
                dp[i]=INT_MAX;
            }
            else
            {
                dp[i]=1+mi;
            }
        }
        
        if(dp[amount]==INT_MAX)
        {
            return -1;
        }
        
        return dp[amount];
    }
};