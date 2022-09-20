class Solution {
public:
    
    int vis[2005];
    int col[2005];
    
    bool dfs(int i,int c,vector<int> v[])
    {
        vis[i]=1;
        col[i]=c;
        
        for(auto j:v[i])
        {
            if(!vis[j])
            {
                int x=1^c;
                
                if(dfs(j,x,v))
                {
                    return 1;
                }
            }
            
            else if(col[j]==c)
            {
                return 1;
            }
        }
        
        return 0;
    }
    
    bool possibleBipartition(int n, vector<vector<int>>& d) {
        
        vector<int> v[n+1];
        
        memset(vis,0,sizeof(vis));
        memset(col,-1,sizeof(col));
        
        for(auto x:d)
        {
            int a=x[0];
            int b=x[1];
            
            v[a].push_back(b);
            v[b].push_back(a);
        }
        
        for(int i=1;i<=n;i++)
        {
            if(!vis[i])
            {
                if(dfs(i,0,v))
                {
                    return 0;
                }
            }
        }
        
        return 1;
    }
};