class Solution {
public:
    
    void dfs(int i,vector<int> adj[],int vis[])
    {
        vis[i]=1;
        
        for(auto j:adj[i])
        {
            if(!vis[j])
            {
                dfs(j,adj,vis);
            }
        }
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        
        int vis[n+1];
        memset(vis,0,sizeof(vis));
        
        vector<int> adj[n];
        
        for(auto i:edges)
        {
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        
        dfs(source,adj,vis);
        
        return vis[destination];
    }
};