class Solution {
public:
    
    int n,m;
    
    int dx[4]={1,-1,0,0};
    int dy[4]={0,0,1,-1};
    
    
    int dp[205][205];
    
    int solve(int i,int j,vector<vector<int>>& g,vector<vector<int>>& vis,int len)
    {
        //ans=max(ans,len);
        
        if(dp[i][j]!=-1)
        {
            return dp[i][j];    
        }
        
        int ans=0;
        
        //ans=len;
        
        for(int k=0;k<4;k++)
        {
            int x=i+dx[k];
            int y=j+dy[k];
            
            if(x>=0 && x<n && y>=0 && y<m && g[x][y]>g[i][j] && !vis[x][y])
            {
                vis[x][y]=1;
                ans=max(ans,1+solve(x,y,g,vis,1+len));
                vis[x][y]=0;
            }
        }
        
        return dp[i][j]=ans;
    }
    int longestIncreasingPath(vector<vector<int>>& g) {
        
        n=g.size();
        m=g[0].size();
        int ans=0;
        
        memset(dp,-1,sizeof(dp));
        vector<vector<int>> vis(n,vector<int>(m,0));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                
                vis[i][j]=1;
                
                ans=max(ans,solve(i,j,g,vis,1));
                //solve(i,j,g,vis,1);
                vis[i][j]=0;
            }
        }
        
        return ans+1;
    }
};