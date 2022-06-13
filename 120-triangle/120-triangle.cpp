class Solution {
public:
    int minimumTotal(vector<vector<int>>& g) {
        
        int n=g.size();
       // cout<<n<<endl;
        // int dp[n][n];
        // memset(dp,10000,sizeof(dp));
        
        vector<vector<int>> dp;
        
        for(int i=0;i<n;i++)
        {
            vector<int> v(i+1,100);
            dp.push_back(v);
        }
        for(int j=n-1;j>=0;j--)
        {
            dp[n-1][j]=g[n-1][j];
        }
        
        for(int i=n-2;i>=0;i--)
        {
            for(int j=0;j<=i;j++)
            {
                dp[i][j]=g[i][j];
               // cout<<g[i][j]<<" ";
                int mi=INT_MAX;
                
                if(j+1<n)
                {
                    mi=min(mi,dp[i+1][j+1]);
                }
                if(j<n)
                {
                    mi=min(mi,dp[i+1][j]);
                }
                
                dp[i][j]+=mi;
            }
          //  cout<<endl;

        }
    
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<=i;j++)
        //     {
        //         cout<<dp[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        

        return dp[0][0];
    }
};