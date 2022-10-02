class Solution {
public:
    int lengthOfLIS(vector<int>& a) {
        
        int n=a.size();
        
        vector<int> dp(n,1);
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(a[i]>a[j] && dp[i]<dp[j]+1)
                {
                    dp[i]=dp[j]+1;
                }
                
            }
        }
        
        int mx=0;
        
        for(int i=0;i<n;i++)
        {
            mx=max(mx,dp[i]);
        }
        
        return mx;
    }
};