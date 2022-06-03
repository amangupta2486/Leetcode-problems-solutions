class NumMatrix {
public:
    
    int dp[205][205];
    NumMatrix(vector<vector<int>>& g) {
        
        int n=g.size();
        int m=g[0].size();
        
        //int dp[n+1][m+1];
        memset(dp,0,sizeof(dp));
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                dp[i][j]+=dp[i][j-1]+g[i-1][j-1];
            }
        }
        

            for(int j=1;j<=m;j++)
            {
               for(int i=1;i<=n;i++)
               {
                   dp[i][j]+=dp[i-1][j];
               }
            }
    
        // for(int i=1;i<=n;i++)
        // {
        //     for(int j=1;j<=m;j++)
        //     {
        //         cout<<dp[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
    }
    
    int sumRegion(int r1, int c1, int r2, int c2) {
        
        int ans=dp[r2+1][c2+1]-dp[r1][c2+1]-dp[r2+1][c1]+dp[r1][c1];
        return ans;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */