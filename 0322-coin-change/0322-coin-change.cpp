class Solution {
public:
    int coinChange(vector<int>& c, int a) {
        
        int n=c.size();
        
        vector<int> dp(a+1,0);
        
        for(int i=1;i<=a;i++)
        {
            int mi=INT_MAX;
            for(int j=0;j<c.size();j++)
            {
                if(c[j]<=i)
                {
                    mi=min(mi,dp[i-c[j]]);
                }
            }
            
            if(mi==INT_MAX)
            {
                dp[i]=INT_MAX;
            }
            else
            {
                dp[i]=mi+1;
            }
        }
        
        if(dp[a]==INT_MAX)
        {
            return -1;
        }
        
        return dp[a];
    }
};