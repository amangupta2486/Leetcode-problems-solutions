class Solution {
public:
    
    
    void dfs(int i,int j,vector<vector<int>>& g)
    {
        if(i<0 || i>=g.size() || j<0 || j>=g[0].size() || g[i][j]!=0)
        {
            return;
        }
        
        g[i][j]=2;
        
        dfs(i+1,j,g);
        dfs(i,j+1,g);
        dfs(i-1,j,g);
        dfs(i,j-1,g);
        
    }
    
    int closedIsland(vector<vector<int>>& g) {
        
        int n=g.size();
        int m=g[0].size();
        
        int ans=0;
    
        for(int i=0;i<n;i++)
        {
            if(g[i][0]==0)
            {
                dfs(i,0,g);
            }
        }
        
        for(int i=0;i<n;i++)
        {
            if(g[i][m-1]==0)
            {
                dfs(i,m-1,g);
            }
        }
        
        
        for(int j=0;j<m;j++)
        {
            if(g[0][j]==0)
            {
                dfs(0,j,g);
            }
        }
        
        for(int j=0;j<m;j++)
        {
            if(g[n-1][j]==0)
            {
                dfs(n-1,j,g);
            }
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(g[i][j]==0)
                {
                    dfs(i,j,g);
                    ans++;
                }
            }
        }
        
        return ans;
    }
};