class Solution {
public:
    
    void dfs(int i,int j,vector<vector<int>>& g,int &c)
    {
        if(i<0 || i>=g.size() || j<0 || j>=g[0].size() || g[i][j]!=1)
        {
            return;
        }
        
        g[i][j]=2;
        c++;
        
         dfs(i+1,j,g,c);
         dfs(i,j+1,g,c);
         dfs(i-1,j,g,c);
         dfs(i,j-1,g,c);
    }
    int maxAreaOfIsland(vector<vector<int>>& g) {
        
        int n=g.size();
        int m=g[0].size();
        
        int ans=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(g[i][j]==1)
                {
                    int c=0;
                    dfs(i,j,g,c);
                    ans=max(ans,c);
                }
            }
        }
        
        return ans;
    }
};