class Solution {
public:
    
    int vis[1000005];
    int ans=INT_MAX;
    
    void dfs(int i,vector<vector<int>> adj[],int n)
    {
        vis[i]=1;

        for(auto j:adj[i])
        {
            ans=min(ans,j[1]);
        
            if(!vis[j[0]])
            {
                dfs(j[0],adj,n);
            }
        }
    }
    int minScore(int n, vector<vector<int>>& r) {
        
        vector<vector<int>> adj[n+1];

        memset(vis,0,sizeof(vis));
        
        for(auto x:r)
        {
            adj[x[0]].push_back({x[1],x[2]});

            adj[x[1]].push_back({x[0],x[2]});      
        }
        
        dfs(1,adj,n);
        
        return ans;
    }
};