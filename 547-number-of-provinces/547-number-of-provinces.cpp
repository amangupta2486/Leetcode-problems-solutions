class Solution {
public:
    
    int vis[205];
    vector<int> v[205];
    
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
    
    
    int findCircleNum(vector<vector<int>>& a) {
        
        memset(vis,0,sizeof(vis));
        int n=a.size();
        int m=a[0].size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(a[i][j])
                {
                    v[i].push_back(j);
                    v[j].push_back(i);
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