class Solution {
public:
    
    int dp[205][205];
    int dx[4]={1,-1,0,0};
    int dy[4]={0,0,1,-1};
    
    int dfs(vector<vector<int>>& g,int i,int j,int n,int m)
    {
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        int ans=0;
        
        for(int k=0;k<4;k++)
        {
            int x=i+dx[k];
            int y=j+dy[k];
            
            if(x>=0 && x<n && y>=0 && y<m && g[x][y]>g[i][j])
            {
                ans=max(ans,1+dfs(g,x,y,n,m));
            }
        }
        
        return dp[i][j]=ans;
    }
    int longestIncreasingPath(vector<vector<int>>& g) {
        
        int n=g.size();
        int m=g[0].size();
        
        int ans=0;
        memset(dp,-1,sizeof(dp));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                ans=max(ans,1+dfs(g,i,j,n,m));
            }
        }
        
        return ans;
    }
};