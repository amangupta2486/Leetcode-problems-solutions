class Solution {
public:
    
    vector<int> adj[505];
    int vis[505],mp[505];
    
//     void dfs(int i)
//     {
//         vis[i]=1;

//         for(auto j:adj[i])
//         {
//             if(!vis[j])
//             {
//                 if(mp[j]>mp[i]+1)
//                 mp[j]=mp[i]+1;
                
//                 dfs(j);
//             }
//         }
//     }
    
    bool intersect(vector<int> &a,vector<int> &b)
    {
        int n=a.size();
        int m=b.size();
        
        int i=0,j=0;
        
        while(i<n && j<m)
        {
            if(a[i]==b[j])
            {
                return 1;
            }
            
            if(a[i]<b[j])
            {
                i++;
            }
            else
            {
                j++;
            }
        }
        
        return 0;;
    }
    int numBusesToDestination(vector<vector<int>>& routes, int source, int target) {
        
        if(source==target)
        {
            return 0;
        }
        
        memset(vis,0,sizeof(vis));
//         memset(mp,1000000,sizeof(mp));
        
        //cout<<routes.size()<<endl;
        
        int j=0;
        int buses=routes.size();
        
        for(auto x:routes)
        {
            auto p=x;
            
            int n=p.size();
            //cout<<x.size()<<endl;
            for(int i=0;i<n;i++)
            {
                //cout<<v[i]<<"->";
                
                    //cout<<v[j]<<"->";
                adj[j].push_back(p[i]);

               // cout<<endl;
            }
            sort(routes[j].begin(),routes[j].end());
            j++;
        }
        
        vector<unordered_map<int,int>> v(buses);
        
        
        vector<int> sr,tar;
        
        for(int i=0;i<buses;i++)
        {
            for(auto x:adj[i])
            {
                //cout<<x<<" ";
                if(x==source)
                {
                    sr.push_back(i);
                }
                
                if(x==target)
                {
                    tar.push_back(i);
                }
                v[i][x]=1;
            }
        }
        
        vector<int> bs[buses];
        
        for(int i=0;i<buses;i++)
        {
           for(int j=i+1;j<buses;j++)
            {
                if(intersect(routes[i],routes[j]))
                {
                    bs[i].push_back(j);
                    bs[j].push_back(i);
                }
            } 
            
        }
        
        int ans=-1;
        
        queue<vector<int>> q;
        
        for(auto i:sr)
        {
            q.push({i,1});
        }
        
        unordered_map<int,int> tag;
        
        for(auto i:tar)
        {
            tag[i]++;
        }
        
        while(!q.empty())
        {
            int k=q.size();
            
            while(k--)
            {
                auto p=q.front();
                q.pop();
                
                int bus=p[0];
                int c=p[1];
                
                
                if(tag[bus]>0)
                {
                    ans=c;
                    break;
                }
                
                if(!vis[bus])
                {
                    for(auto x:bs[bus])
                    {
                        q.push({x,c+1});
                    }
                    vis[bus]=1;
                }
   
            }
            if(ans!=-1)
            {
                break;
            }
        }
        
        return ans;
        
        // mp[source]=0;
        // dfs(source);
        
        // if(mp[target]==10000)
        // {
        //     return -1;
        // }
        
//         if(!vis[target])
//         {
//             return -1;
//         }
        
//         return mp[target];
    }
};