class Solution {
public:
    
    int vis[20];
    vector<vector<int>> ans;
    int n;
    
    void dfs(int i,vector<int> adj[],vector<int> v)
    {
        if(i==n-1)
        {
            v.push_back(n-1);
            ans.push_back(v);
            return;
        }
        
        v.push_back(i);
        vis[i]=1;
        
        for(auto j:adj[i])
        {
            if(!vis[j])
            {
                dfs(j,adj,v);
            }
        }
        
        vis[i]=0;
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
     
        n=graph.size();
        
        memset(vis,0,sizeof(vis));
        
        vector<int> adj[n];
        
        int i=0;
        
        for(auto nodes:graph)
        {
            for(auto node:nodes)
            {
                adj[i].push_back(node);
            }
            i++;
        }
        
        vector<int> v;
        
        dfs(0,adj,v);
        
        return ans;
    }
};