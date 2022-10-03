class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        
        int n=coins.size();
        
        vector<int> dp(amount+1,0);
        
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
            else{
                dp[i]=mi+1;
            }
        }
        
        if(dp[amount]==INT_MAX)
        {
            return -1;
        }
            
        return dp[amount];
    }
};