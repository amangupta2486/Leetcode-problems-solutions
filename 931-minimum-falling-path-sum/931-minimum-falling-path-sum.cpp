class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& g) {
        
        int n=g.size();

        int dp[n+1][n+1];
        memset(dp,0,sizeof(dp));
        
        for(int j=0;j<n;j++)
        {
            dp[n-1][j]=g[n-1][j];
        }
        
        for(int i=n-2;i>=0;i--)
        {
            for(int j=0;j<n;j++)
            {
                int mi=dp[i+1][j];
                
                if(j-1>=0)
                {
                    mi=min(mi,dp[i+1][j-1]);
                }
                if(j+1<n)
                {
                    mi=min(mi,dp[i+1][j+1]);
                }
                //cout<<g[i][j]<<" ";
                dp[i][j]=g[i][j]+mi;
            }
        }
        
        int ans=INT_MAX;
        
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<n;j++)
        //     {
        //         cout<<dp[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        
        for(int j=0;j<n;j++)
        {
            ans=min(dp[0][j],ans);
        }
        
        return ans;
    }
};