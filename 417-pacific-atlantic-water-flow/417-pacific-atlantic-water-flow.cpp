class Solution {
public:
    
    
    void dfs(int i,int j,vector<vector<int>>& h,vector<vector<int>> &vis,int p,vector<vector<int>> &v)
    {
        if(i<0 || j<0 || i>=h.size() || j>=h[0].size() || h[i][j]<p || v[i][j]==1)
        {
            return ;
        }
        
        vis[i][j]=1;
        v[i][j]=1;
        
        dfs(i+1,j,h,vis,h[i][j],v);
        dfs(i,j+1,h,vis,h[i][j],v);
        dfs(i-1,j,h,vis,h[i][j],v);
        dfs(i,j-1,h,vis,h[i][j],v);
    }
    
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& h) {
        
        int n=h.size();
        int m=h[0].size();
        
        vector<vector<int>> pac(n,vector<int>(m,0));
        vector<vector<int>> at(n,vector<int>(m,0));
       // vector<vector<int>> v(n,vector<int>(m,0));
        
        for(int i=0;i<n;i++)
        {
            vector<vector<int>> v(n,vector<int>(m,0));
        
            pac[i][0]=1;
            dfs(i,0,h,pac,-1,v);
            at[i][m-1]=1;
            vector<vector<int>> b(n,vector<int>(m,0));
            dfs(i,m-1,h,at,-1,b);
        }
        
        for(int j=0;j<m;j++)
        {
            vector<vector<int>> v(n,vector<int>(m,0));
        
            pac[0][j]=1;
            dfs(0,j,h,pac,-1,v);
            at[n-1][j]=1;
            vector<vector<int>> b(n,vector<int>(m,0));
            dfs(n-1,j,h,at,-1,b);
        }
        
        vector<vector<int>> ans;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(pac[i][j]==1 && at[i][j]==1)
                {
                    ans.push_back({i,j});
                }
            }
        }
        
        return ans;
    }
};