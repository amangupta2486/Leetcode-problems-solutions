class Solution {
public:
    
    int vis[10005];
    
    void dfs(int i,vector<vector<int>> adj[])
    {
        vis[i]=1;
        
        for(auto j:adj[i])
        {
            if(!vis[j[0]])
            {
                dfs(j[0],adj);
            }
        }
    }
    
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        
        memset(vis,0,sizeof(0));
        
        vector<vector<int>> adj[n];
        vector<double> pro(n,0);
        for(int i=0;i<edges.size();i++)
        {
            adj[edges[i][0]].push_back({edges[i][1],i});
            adj[edges[i][1]].push_back({edges[i][0],i});
        }
        
        dfs(start,adj);
        
        if(!vis[end])
        {
            return 0;
        }
        
        priority_queue<pair<double,int>> q;
        
        q.push({1,start});
        
        double ans=0;
        pro[start]=1;
        
        while(!q.empty())
        {
            auto p=q.top();
            q.pop();
            
            double x=p.first;
            int u=p.second;
          //  cout<<u<<" "<<x<<endl;
                
            if(u==end)
            {
                ans=max(ans,x);
            }
            for(auto j:adj[u])
            {
                auto v=j[0];
                auto w=succProb[j[1]];
                
                if(x*w>pro[v])
                {
                    pro[v]=x*w;
                    q.push({pro[v],v});
                }
            }
        }
        
        return ans;
    }
};