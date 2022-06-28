class Solution {
public:
    
    int dx[4]={1,-1,0,0};
    int dy[4]={0,0,1,-1};
    
    void dfs(int i,int j,int n,int m,vector<vector<int>>& h,vector<vector<int>> &g)
    {
        
        for(int k=0;k<4;k++)
        {
            int x=i+dx[k];
            int y=j+dy[k];
            
            if(x>=0 && x<n && y>=0 && y<m && h[x][y]>=h[i][j] && !g[x][y])
            {
                g[x][y]=1;
                dfs(x,y,n,m,h,g);
            }
        }
    }
    
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& h) {
        
        int n=h.size();
        int m=h[0].size();
        
        vector<vector<int>> p(n,vector<int>(m,0));
        vector<vector<int>> at(n,vector<int>(m,0));
            
        for(int j=0;j<m;j++)
        {
            p[0][j]=1;
            at[n-1][j]=1;
            
            dfs(0,j,n,m,h,p);
            dfs(n-1,j,n,m,h,at);
        }
        
        for(int i=0;i<n;i++)
        {
            p[i][0]=1;
            at[i][m-1]=1;
            
            dfs(i,0,n,m,h,p);
            dfs(i,m-1,n,m,h,at);
        }
        
        vector<vector<int>> ans;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(p[i][j]==1 && at[i][j]==1)
                {
                    ans.push_back({i,j});
                }
            }
        }
        
        return ans;
    }
};