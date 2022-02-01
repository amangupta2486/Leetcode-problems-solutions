class Solution {
public:
    
    vector<int> g[200005];
    bool vis[200005]={0};
    
    
    void dfs(int n)
    {
        vis[n]=1;
        
        //  if(n==d)
        // {
        //     return true;
        // }
        for(auto i:g[n])
        {
           
            if(!vis[i])
            {
                dfs(i);
            }
        }
        
        //return false;
    }

    bool validPath(int n, vector<vector<int>>& p, int s, int d) {
        
        if(s==d)
        {
            return true;
        }
        
        for(auto i:p)
        {
            g[i[0]].push_back(i[1]);
            g[i[1]].push_back(i[0]);
        }
        
       dfs(s);
        
    if(vis[s] && vis[d])
    {
        return true;
    }
        
    return false;
    }
};