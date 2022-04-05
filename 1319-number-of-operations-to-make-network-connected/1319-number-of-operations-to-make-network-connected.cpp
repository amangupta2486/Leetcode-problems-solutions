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
    int makeConnected(int n, vector<vector<int>>& g) {
        
        memset(vis,0,sizeof(vis));
        
        for(auto i:g)
        {
            v[i[0]].push_back(i[1]);
            v[i[1]].push_back(i[0]);
        }
        
        int m=g.size();
        
        if(m<n-1)
        {
            return -1;
        }
        
        int c=0;
        vector<int> q;
        
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                dfs(i);
                c++;
            }
        }
        
        return c-1;
    }
};