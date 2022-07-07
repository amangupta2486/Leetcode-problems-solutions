class Solution {
public:
    
    vector<int> adj[205];
    int vis[205];
    
    
    void dfs(int i)
    {
        vis[i]=1;
        
        for(auto j:adj[i])
        {
            if(!vis[j])
            {
                dfs(j);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
    
        memset(vis,0,sizeof(vis));
        
        int n=isConnected.size();
        int m=isConnected[0].size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(isConnected[i][j]==1)
                {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
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
        
        return ans;
        
    }
};