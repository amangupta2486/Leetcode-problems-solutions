class Solution {
public:
    
    bool vis[105];
    int col[105];
    
    bool check(int i,int c,vector<vector<int>>& g)
    {
        vis[i]=1;
        col[i]=c;
        
        for(auto j:g[i])
        {
            if(!vis[j])
            {
                int x=1^c;
                
                if(check(j,x,g))
                {
                    return true;
                }
            }
            
            else if(col[j]==c)
            {
                return true;
            }
        }
        
        return false;
    }
    
    bool isBipartite(vector<vector<int>>& g) {
        
        memset(vis,0,sizeof(vis));
        memset(col,0,sizeof(col));
        
        int n=g.size();
        
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                if(check(i,1,g))
                {
                    return false;
                }
            }
        }
        
        return true;
    }
};