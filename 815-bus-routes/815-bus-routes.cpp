class Solution {
public:
    
    vector<int> adj[505];
    int vis[505],mp[505];

    
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

        int j=0;
        int buses=routes.size();
        
         vector<int> sr,tar;
        
        for(auto x:routes)
        {
            auto p=x;
            
            int n=p.size();
            //cout<<x.size()<<endl;
            for(int i=0;i<n;i++)
            {
                
                if(p[i]==source)
                {
                    sr.push_back(j);
                }
                
                if(p[i]==target)
                {
                    tar.push_back(j);
                }
                
                adj[j].push_back(p[i]);

               // cout<<endl;
            }
            sort(routes[j].begin(),routes[j].end());
            j++;
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
        
    }
};