class Solution {
public:
    
    void dfs(int i,int j,vector<vector<char>>& g)
    {
        if(i<0 || i>=g.size() || j<0 || j>=g[0].size() || g[i][j]!='O')
        {
            return;
        }

        g[i][j]='_';
        
        dfs(i+1,j,g);
        dfs(i,j+1,g);
        dfs(i-1,j,g);
        dfs(i,j-1,g);
    }
    
    void solve(vector<vector<char>>& g) {
        
        int n=g.size();
        int m=g[0].size();
        
        for(int j=0;j<m;j++)
        {
            if(g[0][j]=='O')
            dfs(0,j,g);
        }
        
        for(int j=0;j<m;j++)
        {
            if(g[n-1][j]=='O')
            dfs(n-1,j,g);
        }
        
        for(int i=0;i<n;i++)
        {
            if(g[i][0]=='O')
            dfs(i,0,g);
        }
        
        for(int i=0;i<n;i++)
        {
            if(g[i][m-1]=='O')
            dfs(i,m-1,g);
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