class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        
        vector<double> key(n,0);
        vector<int> vis(n,0);
        
        key[start]=1;
        
        vector<vector<double>> v[n];
        
        int i=0;
        
        for(auto j:edges)
        {
            v[j[0]].push_back({(double)j[1],succProb[i]});
            v[j[1]].push_back({(double)j[0],succProb[i]});
            i++;
        }
        

        priority_queue<pair<double,int>> q;
        
        
        vis[start]=1;
        q.push({1,start});
    
        while(!q.empty())
        {
          auto p=q.top();
          q.pop();
            
          int u=p.second;
          vis[u]=1;
          if(u==end)
          {
              return p.first;
          }
          for(auto j:v[u])
          {
              int v=j[0];
              double w=j[1];
             //cout<<v<<" "<<w<<endl;
              if(vis[v]==0 && key[v]<key[u]*w)
              {
                  //vis[v]=1;
                  key[v]=key[u]*w;
                  q.push({key[u]*w,v});
              }
          }
        }
        
        // for(int i=0;i<n;i++)
        // {
        //     cout<<i<<" "<<key[i]<<endl;
        // }
        return 0;
    }
};

/*
Input
5
[[1,4],[2,4],[0,4],[0,3],[0,2],[2,3]]
[0.37,0.17,0.93,0.23,0.39,0.04]
3
4
Output
0.00000
Expected
0.21390
*/