class Solution {
public:
    int countSquares(vector<vector<int>>& g) {
        
        int n=g.size();
        int m=g[0].size();
        
        int s=min(n,m);
        
        int ans=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(g[i][j]==1)
                {
                    int k=1;
                    int x=i;
                    int y=j;
                    
                    int f=1;
                    ans++;
                    
                    while(x<n-k && y<m-k && f)
                    {
                        for(int a=y;a<=y+k;a++)
                        {
                            if(g[x+k][a]!=1)
                            {
                                f=0;
                                break;
                            }
                        }
                        
                        for(int b=x;b<=x+k;b++)
                        {
                            if(g[b][y+k]!=1)
                            {
                                f=0;
                                break;
                            }
                        }
                        
                        if(f)
                        {
                            ans++;
                            k++;
                        }
                    }
                }
            }
        }
        
        return ans;
        /*
        int dp[n+1][m+1];
        memset(dp,0,sizeof(dp));
        
        int ans=0;
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(g[i-1][j-1]==1)
                {
                    ans++;
                    dp[i][j]=1+min({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]});
                }
                
            }
        }
        
        return ans;
        */
    }
};