class Solution {
public:
    
     vector<vector<int>> v[105];
     int vis[105];
     
    
     void dfs(int i,vector<int> &p)
     {
         vis[i]=1;
         //cout<<i<<"->";
         for(auto j:v[i])
         {
             int y=j[0];
             int z=j[1];
             //cout<<y<<" "<<z<<endl;
            // cout<<p[z]<<" "<<p[i]+y<<endl;
             if(p[z]>p[i]+y)
             {
                 p[z]=p[i]+y;
                 dfs(z,p);
             }
             else
             {
                continue;
             }
         }
         return;
     }
    int networkDelayTime(vector<vector<int>>& t, int n, int k) {
        
        vector<int> p(n+1,100000);
       
        p[k]=0;

        if(n<=1)
        {
            return n;
        }
        //queue<vector<int>> q;
        //vector<vector<int>> v[n];
       
        
        for(auto i:t)
        {
            v[i[0]].push_back({i[2],i[1]});
        }
       // q.push({k,0});
        
        for(int i=1;i<=n;i++)
        sort(v[i].begin(),v[i].end());
        
        memset(vis,0,sizeof(vis));
        
        dfs(k,p);
        
        int ans=0;
        
        for(int i=1;i<=n;i++)
        {
            if(p[i]==100000)
            {
                return -1;
            }
            ans=max(ans,p[i]);
        }
        
        //cout<<endl;
        return ans;
        /*
        int ans=0;
        int cnt=0;
        vis[k]=1;
        map<int,int> mp;
        
        while(!q.empty())
        {
            int k=q.size();
            cnt+=k;
            //cout<<k<<" ";
            while(k--)
            {
                auto p=q.front();
                q.pop();
                
                int r=p[0];
                int c=p[1];
                
                int mx=0;
                for(auto x:v[r])
                {
                   // for(auto x:j)
                    int w=c;
                    if(!vis[x[0]])
                    {
                      vis[x[0]]=1;  
                      mx=max(mx,x[1]);
                       w+=x[1];
                        //cout<<w<<endl;
                      mp[x[0]]=w;
                      q.push({x[0],w});
                    }
                    else{
                        // cout<<c+x[1]<<" ";
                        //cout<<mp[x[0]]<<" ";
                        if(mp[x[0]]>c+x[1])
                        {
                            ans-=mp[x[0]];
                            ans+=c+x[1];
                            mp[x[0]]=x[1];
                        }
                    }
                }
                ans+=mx;
            }
        }
        
        //  for(int i=1;i<=n;i++)
        // {
        //     if(vis[i]==-1)
        //     {
        //         return -1;
        //     }
        // }
       // cout<<cnt<<" "<<ans<<endl;
        
        return cnt==n?ans:-1;
        */
    }
};