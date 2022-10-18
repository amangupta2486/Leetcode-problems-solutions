class Solution {
public:
    
    int vis[100005];
    
    void dfs(int i,vector<int> v[])
    {
        vis[i]=1;
        
        for(auto x:v[i])
        {
            if(!vis[x])
            {
                dfs(x,v);
            }
        }
    }
    
    int makeConnected(int n, vector<vector<int>>& con) {
        
        int m=con.size();
        
        if(m<n-1)
        {
            return -1;
        }
        
        vector<int> v[n];
        
        for(auto x:con)
        {
            v[x[0]].push_back(x[1]);
            v[x[1]].push_back(x[0]);
        }
        
        int cc=0;
        
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                dfs(i,v);
                cc++;
            }
        }
        
        return cc-1;
    }
};