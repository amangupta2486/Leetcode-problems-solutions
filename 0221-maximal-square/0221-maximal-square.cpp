class Solution {
public:
    int maximalSquare(vector<vector<char>>& g) {
        
        int n=g.size();
        int m=g[0].size();
        
        int dp[n+1][m+1];
        
        memset(dp,0,sizeof(dp));
        
        int mx=0;
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(g[i-1][j-1]=='1')
                {
                    dp[i][j]=1+min({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]});
                }
                
                mx=max(mx,dp[i][j]);
                
                //cout<<dp[i][j]<<" ";
            }
            //cout<<endl;
        }
        
        return mx*mx;
    }
};