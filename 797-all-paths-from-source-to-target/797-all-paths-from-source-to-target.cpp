class Solution {
public:
    
    vector<vector<int>> ans;
    
    void dfs(int i,int d,vector<vector<int>>& g,vector<int> v,vector<int> &vis)
    {
        if(i==d)
        {
            v.push_back(i);
            ans.push_back(v);
            
            return;
        }
        
        v.push_back(i);
        vis[i]=1;
        
        for(auto j:g[i])
        {
            if(!vis[j])
            {
                dfs(j,d,g,v,vis);
            }
        }
        
        vis[i]=0;
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& g) {
        
        int n=g.size();
        
        vector<int> vis(n,0);
        
        vector<int> v;
        
        dfs(0,n-1,g,v,vis);
        
        return ans;
    }
};