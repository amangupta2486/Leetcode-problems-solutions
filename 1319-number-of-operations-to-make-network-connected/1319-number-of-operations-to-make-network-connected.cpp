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
        
        if(c.size()<n-1)
        {
            return -1;
        }
        
        memset(vis,0,sizeof(vis));
        
        for(auto i:c)
        {
            v[i[0]].push_back(i[1]);
            v[i[1]].push_back(i[0]);
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