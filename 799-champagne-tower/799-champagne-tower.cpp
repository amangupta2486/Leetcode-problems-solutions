class Solution {
public:
    double champagneTower(int p, int r, int c) {
        
        double dp[105][105];
        
        memset(dp,0,sizeof(dp));
        
        dp[0][0]=p;
        
        for(int i=0;i<=r;i++)
        {
            for(int j=0;j<=c;j++)
            {
                double q = (dp[i][j]-1.0)/2.0;
                
                if(q>0)
                {
                    dp[i+1][j]+=q;
                    dp[i+1][j+1]+=q;
                }
            }
        }
        
        return min(1.0,dp[r][c]);
    }
};