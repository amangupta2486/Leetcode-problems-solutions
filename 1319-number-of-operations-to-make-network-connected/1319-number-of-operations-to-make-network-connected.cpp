class Solution {
public:
    
    void dfs(int i,vector<int> &vis,vector<int> adj[])
    {
        
        vis[i]=1;
        
        for(auto j:adj[i])
        {
            if(!vis[j])
            {
                dfs(j,vis,adj);
            }
        }
    }
    
    int makeConnected(int n, vector<vector<int>>& connections) {
        
        int m=connections.size();
        
        if(m<n-1)
        {
            return -1;
        }
        
        vector<int> adj[n];
        
        for(auto i:connections)
        {
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        
        int cc=0;
        vector<int> vis(n,0);
        
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                dfs(i,vis,adj);
                cc++;
            }
        }
        
        return cc-1;
    }
};