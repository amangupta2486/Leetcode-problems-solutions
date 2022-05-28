class NumMatrix {
public:
    
    int dp[205][205];
    
    NumMatrix(vector<vector<int>>& g) {
     memset(dp,0,sizeof(dp));
        
        int n=g.size();
        int m=g[0].size();
        
        for(int i=1;i<=n;i++)
        {
            //dp[i][0]=g[i][0];
            
            for(int j=1;j<=m;j++)
            {
                dp[i][j]=dp[i][j-1]+g[i-1][j-1];
            }
        }
        
//         for(int i=1;i<=n;i++)
//         {
//             //dp[i][0]=g[i][0];
            
//             for(int j=1;j<=m;j++)
//             {
//                 cout<<dp[i][j]<<" ";
//             }
//             cout<<endl;
//         }
        
    }
    
    int sumRegion(int r1, int c1, int r2, int c2) {
        
        long s=0;
        
        for(int i=r1+1;i<=r2+1;i++)
        {
            //cout<<dp[i][c2+1]<<","<<dp[i][c1]<<" ";
            s+=dp[i][c2+1]-dp[i][c1];
        }
        //cout<<endl;
        return s;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */