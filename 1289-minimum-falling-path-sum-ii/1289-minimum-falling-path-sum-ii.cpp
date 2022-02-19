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

                int mi=INT_MAX;
                
           
                for(int k=0;k<n;k++)
                {
                    if(j!=k)
                    mi=min(mi,dp[i+1][k]);
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


// [[-73,61,43,-48,-36],
//  [3,30,27,57,10],
//  [96,-76,84,59,-15],
//  [5,-49,76,31,-7],
//  [97,91,61,-46,67]]

// Output:
// -67
// Expected:
// -192