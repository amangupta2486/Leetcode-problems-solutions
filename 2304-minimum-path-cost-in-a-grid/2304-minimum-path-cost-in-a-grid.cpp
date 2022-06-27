class Solution {
public:
    int minPathCost(vector<vector<int>>& g, vector<vector<int>>& cost) {
        
        int n=g.size();
        int m=g[0].size();
        
        int dp[n][m];
        memset(dp,0,sizeof(dp));
        
        for(int j=0;j<m;j++)
        {
            dp[n-1][j]=g[n-1][j];
        }
        
        for(int i=n-2;i>=0;i--)
        {
            for(int j=0;j<m;j++)
            {
                dp[i][j]=g[i][j];
                
                int mi=INT_MAX;
                
                for(int y=0;y<m;y++)
                {
                    mi=min(mi,dp[i+1][y]+cost[dp[i][j]][y]);
                }
                
                dp[i][j]+=mi;
            }
        }
        
        int ans=INT_MAX;
        
        for(int i=0;i<m;i++)
        {
            ans=min(ans,dp[0][i]);
        }
        
        return ans;
    }
};