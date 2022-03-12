class Solution {
public:
    int dp[205][205];
    
    int bfs(int i,int j,vector<vector<int>>& g,int c)
    {
         
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        int n=g.size();
        int m=g[0].size();
        
     
         int dx[4]={1,-1,0,0};
         int dy[4]={0,0,1,-1};
        
        int res=1;
        
        for(int k=0;k<4;k++)
        {
            int x=i+dx[k];
            int y=j+dy[k];

            if(x>=0 && x<n && y>=0 && y<m && g[x][y]>g[i][j] )
            {
                res=max(res,1+bfs(x,y,g,c+1));
            }
        }
        return dp[i][j]=res;
    }
    
    int longestIncreasingPath(vector<vector<int>>& g) {

        int n=g.size();
        int m=g[0].size();
        
        if(n==0 && m==0)
        {
            return 0;
        }
        int mi=INT_MAX,mx=1;
        memset(dp,-1,sizeof(dp));
         for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                mx=max(mx,bfs(i,j,g,1));
            }
         }
        
        return mx;
    }
};