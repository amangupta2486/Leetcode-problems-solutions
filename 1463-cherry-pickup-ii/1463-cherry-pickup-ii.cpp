class Solution {
public:
    
    int vis[1000][1000];
    
    int dp[71][71][71];
    
    int solve(vector<vector<int>>& g,int n,int m,int i,int j,int x,int y)
    {
        if(i<0 || x<0 || i>=n || x>=n || j<0 || y<0 || j>=m || y>=m )
        {
            return 0;
        }
        
        if(dp[i][j][y]!=-1)
        {
            return dp[i][j][y];
        }
        
        if(i==n-1 && x==n-1)
        {
            if(j==y)
            {
                return g[i][j];
            }
            else
            {
                return g[i][j]+g[x][y];
            }
        }
        
        int c=0;
        
        if(j==y)
        {
            c+=g[i][j];     
        }
        else
        {
            c+=g[i][j]+g[x][y];
        }
        
        int maxcherry=0;
        
        for(int r=-1;r<=1;r++)
        {
            for(int s=-1;s<=1;s++)
            {
                maxcherry = max(maxcherry,solve(g,n,m,i+1,j+r,x+1,y+s));
            }
        }
        c+=maxcherry;
        
        return dp[i][j][y]=c;
    }
    
    int cherryPickup(vector<vector<int>>& g) {
        
        int n=g.size();
        int m=g[0].size();
        
        memset(dp,-1,sizeof(dp));
        
        return solve(g,n,m,0,0,0,m-1);
    }
};