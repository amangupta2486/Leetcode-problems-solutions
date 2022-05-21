class Solution {
public:
    
    void dfs(vector<vector<char>> &g,int i,int j,int n,int m)
    {
        if(i<0 || i>=n || j<0 || j>=m || g[i][j]!='O')
        {
            return;
        }
        
        g[i][j]='_';
        
        dfs(g,i-1,j,n,m);
        dfs(g,i,j-1,n,m);
        dfs(g,i+1,j,n,m);
        dfs(g,i,j+1,n,m);
        
    }
    
    void solve(vector<vector<char>>& g) {
        
        int n=g.size();
        int m=g[0].size();
        
        for(int i=0;i<n;i++)
        {
            if(g[i][0]=='O')
            {
                dfs(g,i,0,n,m);
            }
        }
        for(int i=0;i<n;i++)
        {
            if(g[i][m-1]=='O')
            {
                dfs(g,i,m-1,n,m);
            }
        }
        
        for(int j=0;j<m;j++)
        {
            if(g[0][j]=='O')
            {
                dfs(g,0,j,n,m);
            }
        }
        for(int j=0;j<m;j++)
        {
            if(g[n-1][j]=='O')
            {
                dfs(g,n-1,j,n,m);
            }
        }
        
         for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(g[i][j]=='O')
                {
                    g[i][j]='X';
                }
            }
        }
        
         for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(g[i][j]=='_')
                {
                    g[i][j]='O';
                }
            }
        }
        
    }
};