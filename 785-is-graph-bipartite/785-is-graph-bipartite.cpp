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
                int x=c^1;
                
                if(dfs(j,x,g)==false)
                {
                    return false;
                }
            }
            
            else if(col[j]==c)
            {
                return false;
            }
        }
        
        return true;
    }
    
    bool isBipartite(vector<vector<int>>& g) {
        
        memset(vis,0,sizeof(vis));
        memset(col,0,sizeof(col));
        
        int n=g.size();
        int m=g[0].size();
        
        int f=1;
        
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                if(dfs(i,0,g)==false)
                {
                    return false;
                }
            }
    
        }
        return f;
    }
};

/*
[[1,2,3],[0,2],[0,1,3],[0,2]]
[[1,3],[0,2],[1,3],[0,2]]
[[1],[0,3],[3],[1,2]]
[[1,2,3,4],[0,3,4],[0,3],[0,1,2,4],[0,1,3]]
[[],[2,4,6],[1,4,8,9],[7,8],[1,2,8,9],[6,9],[1,5,7,8,9],[3,6,9],[2,3,4,6,9],[2,4,5,6,7,8]]
[[2,3,5,6,7,8,9],[2,3,4,5,6,7,8,9],[0,1,3,4,5,6,7,8,9],[0,1,2,4,5,6,7,8,9],[1,2,3,6,9],[0,1,2,3,7,8,9],[0,1,2,3,4,7,8,9],[0,1,2,3,5,6,8,9],[0,1,2,3,5,6,7],[0,1,2,3,4,5,6,7]]
*/