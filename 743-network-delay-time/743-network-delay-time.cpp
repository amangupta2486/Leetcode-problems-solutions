class Solution {
public:
    
    vector<vector<int>> v[105];
    int vis[105];
    //map<int,int> mp;
    int mp[105];

    void dfs(int i,int c)
    {
        vis[i]=1;
        
        for(auto j:v[i])
        {
            int x=j[1];
            int y=j[0];
          //  cout<<x<<" "<<y<<endl;
            if(mp[x]>c+y)
            {
                mp[x]=c+y;
                dfs(x,mp[x]);
            }
            else
            {
                continue;
            }
        }
    }
    
    int networkDelayTime(vector<vector<int>>& t, int n, int k) {
        
        memset(vis,0,sizeof(vis));
        memset(mp,10000,sizeof(mp));
        
        for(auto i:t)
        {
            v[i[0]].push_back({i[2],i[1]});
        }
        
        for(int i=0;i<n;i++)
        {
            sort(v[i].begin(),v[i].end());
        }
        
        mp[k]=0;
        
        dfs(k,0);
        int ans=0;
        
        for(int i=1;i<=n;i++)
        {
            if(vis[i]==0)
            {
                return -1;
            }
            else
            {
                ans=max(ans,mp[i]);
            }
        }
        
        return ans;
    }
};