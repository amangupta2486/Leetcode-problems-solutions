class Solution {
public:
    
    int vis[105];
    int col[105];
    
    bool dfs(int i,int c,vector<vector<int>>& g)
    {
        vis[i]=1;
        col[i]=c;
        
        for(auto j:g[i])
        {
            if(!vis[j])
            {
                int x=1^c;
                
                if(dfs(j,x,g))
                {
                    return 1;
                }
            }
            
            else if(col[j]==col[i])
            {
                return 1;
            }
        }
        
        return 0;
    }
    
    bool isBipartite(vector<vector<int>>& g) {
        
        memset(vis,0,sizeof(vis));
        memset(col,0,sizeof(col));
        
        int n=g.size();
        
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                if(dfs(i,1,g))
                {
                    return 0;
                }
            }
        }
        
        return 1;
    }
};