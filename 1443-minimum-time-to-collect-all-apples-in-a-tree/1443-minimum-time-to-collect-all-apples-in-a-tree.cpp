class Solution {
public:
    
    vector<vector<vector<int>>> t;
    
    int vis[100005];
    
    void dfs(int i,vector<int> v[],int n,vector<vector<int>> &p,vector<bool>& hasApple)
    {
        vis[i]=1;
        
        if(hasApple[i])
        {
            t.push_back(p);
        }
        
        for(auto j:v[i])
        {
            if(!vis[j])
            {
                p.push_back({i,j});
                dfs(j,v,n,p,hasApple);
                p.pop_back();
            }
        }
    }
    
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        
        vector<int> v[n];
        
        for(auto x:edges)
        {
            v[x[0]].push_back(x[1]);
            v[x[1]].push_back(x[0]);
        }
        
        int ans=0;
        memset(vis,0,sizeof(vis));
        
        vector<vector<int>> p;
        
        dfs(0,v,n,p,hasApple);
        
        set<vector<int>> s;
        
        for(auto i:t)
        {
            for(auto j:i)
            {
                s.insert(j);
            }
        }
        
        return s.size()*2;
    }
};