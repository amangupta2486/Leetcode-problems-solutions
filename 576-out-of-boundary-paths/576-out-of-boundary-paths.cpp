class Solution {
public:
    
    int dp[55][55][55];
    int mod=1e9 + 7;
    
    int solve(int i,int j,int n,int m,int maxMove,int c)
    {
        if(c>maxMove)
        {
            return 0;
        }
        
        if(i<0 || i>=n || j<0 || j>=m)
        {
            return 1;
        }
        
        if(dp[i][j][c]!=-1)
        {
            return dp[i][j][c];
        }
        
        
        int ans= ((solve(i+1,j,n,m,maxMove,c+1)%mod+solve(i,j+1,n,m,maxMove,c+1)%mod)%mod+
                 (solve(i-1,j,n,m,maxMove,c+1)%mod+solve(i,j-1,n,m,maxMove,c+1)%mod)%mod)%mod;
        
        return dp[i][j][c]=ans;
    }
    
    int findPaths(int n, int m, int maxMove, int i, int j) {
        
        memset(dp,-1,sizeof(dp));
        
        return solve(i,j,n,m,maxMove,0);
    }
};