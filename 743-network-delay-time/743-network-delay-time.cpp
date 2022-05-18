class Solution {
public:
    
    vector<vector<int>> v[105];
    //map<int,int> mp;

    void dfs(int k,vector<int> &mp)
    {
        int c=mp[k];
       // cout<<k<<"->";
        for(auto j:v[k])
        {
            int x=j[1];
            
            if(j[0]+c<mp[x])
            {
                mp[x]=j[0]+c;
                dfs(x,mp);
            }
            else
            {
                continue;
            }
        }
    }
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        

        vector<int> mp(n+1,100000);
        mp[k]=0;
        for(auto i:times)
        {
            v[i[0]].push_back({i[2],i[1]});
        }
        
        for(int i=1;i<=n;i++)
        {
            sort(v[i].begin(),v[i].end());
        }
        

        dfs(k,mp);
        
        int ans=0;

        for(int i=1;i<=n;i++)
        {
            if(mp[i]==100000)
            {
                return -1;
            }
            ans=max(ans,mp[i]);
        }
       // cout<<endl;
        
        return ans;
    }
};