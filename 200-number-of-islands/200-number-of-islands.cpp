class Solution {
public:
    void dfs(vector<vector<char>>& g,int i,int j,int n,int m)
    {
        if(i<0 || i>=n ||j<0 || j>=m || g[i][j]!='1')
        {
            return;
        }
        
        g[i][j]='2';
        
        dfs(g,i-1,j,n,m);
        dfs(g,i,j-1,n,m);
        dfs(g,i+1,j,n,m);
        dfs(g,i,j+1,n,m);
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
                    dfs(g,i,j,n,m);
                    ans++;
                }
            }
        }
        
        return ans;
    }
};