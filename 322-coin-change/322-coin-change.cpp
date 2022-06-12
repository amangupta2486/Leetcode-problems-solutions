class Solution {
public:
    int coinChange(vector<int>& coins, int target) {
        
        int N=coins.size();
        vector<int> dp(target+1,0);
        dp[0]=0;
        
        for(int i=1;i<=target;i++)
        {
            int ans=INT_MAX;
            
            for(int j=0;j<N;j++)
            {
                if(coins[j]<=i)
                ans=min(ans,dp[i-coins[j]]);
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
        
        if(dp[target]==INT_MAX)
        {
            return -1;
        }
        
        return dp[target];
    }
};