class Solution {
public:
    
    vector<vector<int>> ans;
    
    void dfs(vector<vector<int>>& g,vector<int> v,int i,int d)
    {
        if(i==d)
        {
            v.push_back(i);
            ans.push_back(v);
            return;
        }
        
        v.push_back(i);
        
        for(auto x:g[i])
        {
            dfs(g,v,x,d);
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& g) {
      
      int n=g.size();
        
      vector<int> v;
        
      dfs(g,v,0,n-1);
        
      return ans;
    }
};