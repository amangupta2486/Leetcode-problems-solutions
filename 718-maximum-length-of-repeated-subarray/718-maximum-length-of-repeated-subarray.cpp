class Solution {
public:
    int findLength(vector<int>& a, vector<int>& b) {
        
        int n=a.size();
        int m=b.size();
        
        int dp[n+1][m+1];
        memset(dp,0,sizeof(dp));
        
        int ans=0;
        
        for(int i=n-1;i>=0;i--)
        {
            for(int j=m-1;j>=0;j--)
            {
                if(a[i]==b[j])
                {
                    dp[i][j]=1+dp[i+1][j+1];
                }
                
                ans=max(ans,dp[i][j]);
            }
        }
        
        return ans;
    }
};