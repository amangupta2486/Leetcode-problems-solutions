class Solution {
public:
    
    vector<int> v[100005];
    int vis[100005];
    
    
    void dfs(int i)
    {
        vis[i]=1;
        
        for(auto j:v[i])
        {
            if(!vis[j])
            {
                dfs(j);
            }
        }
    }
    int makeConnected(int n, vector<vector<int>>& c) {
        
        int m=c.size();
        memset(vis,0,sizeof(vis));
        
        if(m<n-1)
        {
            return -1;
        }
        
        for(int i=0;i<m;i++)
        {
            auto x=c[i];
            v[x[0]].push_back(x[1]);
            v[x[1]].push_back(x[0]);
        }
        
        int ans=0;
        
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                dfs(i);
                ans++;
            }
        }
        
        return ans-1;
    }
};