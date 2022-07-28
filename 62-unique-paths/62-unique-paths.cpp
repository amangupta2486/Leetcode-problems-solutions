class Solution {
public:
    
    int dp[105][105];
    
    int solve(int i,int j,int n,int m)
    {
        if(i>=n || j>=m)
        {
            return 0;
        }
        
        if(i==n-1 || j==m-1)
        {
            return 1;
        }
        
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        
        return dp[i][j]=solve(i+1,j,n,m) + solve(i,j+1,n,m);
    }
    int uniquePaths(int n, int m) {
        
        memset(dp,-1,sizeof(dp));
        
        return solve(0,0,n,m);
    }
};