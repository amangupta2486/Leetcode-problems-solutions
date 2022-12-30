class Solution {
public:
    
    int vis[100005];
    vector<vector<int>> ans;
    
    void dfs(int i,int n,vector<int> v,vector<vector<int>>& g)
    {
        if(i==n-1)
        {
            v.push_back(i);
            ans.push_back(v);
            return;
        }
        
        vis[i]=1;
        v.push_back(i);
        
        for(auto j:g[i])
        {
            dfs(j,n,v,g);
        }
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        
        memset(vis,0,sizeof(vis));
        int n=graph.size();
        vector<int> v;
        
        dfs(0,n,v,graph);
        
        return ans;
    }
};