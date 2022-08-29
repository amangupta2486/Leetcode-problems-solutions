class Solution {
public:
    
    void dfs(int i,int j,int n,int m,vector<vector<char>>& g)
    {
        if(i<0 || j<0 || i>=n || j>=m || g[i][j]!='1')
        {
            return;
        }
        
        g[i][j]='2';
        
        dfs(i+1,j,n,m,g);
        dfs(i,j+1,n,m,g);
        dfs(i-1,j,n,m,g);
        dfs(i,j-1,n,m,g);
    }
    
    int numIslands(vector<vector<char>>& g) {
        
        int n=g.size();
        int m=g[0].size();
        int ans=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(g[i][j]=='1')
                {
                    dfs(i,j,n,m,g);
                    ans++;
                }
            }
        }
        
        return ans;
    }
};