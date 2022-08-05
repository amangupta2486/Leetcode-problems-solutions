class Solution {
public:
    
    void dfs(int i,int j,vector<vector<char>>& g)
    {
        if(i<0 || i>=g.size() || j<0 || j>=g[0].size() || g[i][j]!='1')
        {
            return;
        }

        g[i][j]='2';
        
        dfs(i+1,j,g);
        dfs(i,j+1,g);
        dfs(i-1,j,g);
        dfs(i,j-1,g);
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
                    dfs(i,j,g);
                    
                    ans++;
                }
            }
        }
        
        return ans;
    }
};