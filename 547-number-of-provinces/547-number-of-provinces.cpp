class Solution {
public:
    
    void dfs(int i,vector<int> adj[],vector<int> &vis)
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
    
    int findCircleNum(vector<vector<int>>& g) {
        
        int n=g.size();
        int m=g[0].size();
        
        vector<int> adj[n];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(g[i][j]==1)
                {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        
        int cc=0;
        
        vector<int> vis(n,0);
        
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                dfs(i,adj,vis);
                cc++;
            }
        }
        
       return cc;
    }
};