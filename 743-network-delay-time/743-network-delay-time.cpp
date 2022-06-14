class Solution {
public:
    
    int vis[105];
    int mp[105];
    
    void dfs(int i,vector<vector<int>> adj[])
    {
        vis[i]=1;

        for(auto j:adj[i])
        {
            int w=j[0];
            int v=j[1];
            
            if(mp[v]>mp[i]+w)
            {
                mp[v]=mp[i]+w;
                dfs(v,adj);
            }
            else
            {
                continue;
            }
        }
    }
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        
        memset(vis,0,sizeof(vis));
        memset(mp,10000,sizeof(mp));
        
        vector<vector<int>> v[n+1];
        
        for(auto i:times)
        {
            v[i[0]].push_back({i[2],i[1]});
        }
        
        for(int i=1;i<=n;i++)
        {
            sort(v[i].begin(),v[i].end());
        }
        
        mp[k]=0;
        dfs(k,v);
        
        int mx=0;
        
        for(int i=1;i<=n;i++)
        {
            if(vis[i]==0)
            {
                return -1;
            }
            mx=max(mx,mp[i]);
        }
        
        return mx;
    }
};