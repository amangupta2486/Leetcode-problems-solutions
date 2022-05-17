class Solution {
public:
    
    vector<int> v[205];
    int vis[205];
    
    void dfs(int i)
    {
        vis[i]=1;
        
        for(auto j:v[i])
        {
            if(!vis[j])
            {
                dfs(j);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& g) {
        
        memset(vis,0,sizeof(vis));
        
        int n=g.size();
        int m=g[0].size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(g[i][j]==1)
                {
                    v[i].push_back(j);
                    v[j].push_back(i);
                }
            }
        }
        
        int c=0;
        
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                dfs(i);
                c++;
            }
        }
        
        return c;
    }
};