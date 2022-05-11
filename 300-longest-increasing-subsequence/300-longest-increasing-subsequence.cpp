class Solution {
public:
    int lengthOfLIS(vector<int>& a) {
        
        int n=a.size();
        
        vector<int> dp(n,1);
        
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(a[j]<a[i] && dp[j]+1>dp[i])
                {
                    dp[i]=1+dp[j];
                }
            }
        }
        
        return *max_element(dp.begin(),dp.end());
    }
};