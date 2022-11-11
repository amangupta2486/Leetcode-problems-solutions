class Solution {
public:
    
    vector<vector<int>> ans;
    
    int vis[20];
    
    void dfs(int i,vector<vector<int>>& g,vector<int> v)
    {
        if(i==g.size()-1)
        {
            v.push_back(i);
            ans.push_back(v);
        }
        
        vis[i]=1;
        v.push_back(i);
        
        for(auto j:g[i])
        {
            if(!vis[j])
            {
                dfs(j,g,v);
            }
        }
        
        vis[i]=0;
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& g) {
      
      memset(vis,0,sizeof(vis));
      
      vector<int> v;
      dfs(0,g,v);
        
      return ans;
    }
};