// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    int vis[100005];
    int d[100005];
    
    bool dfs(int i,vector<int> adj[])
    {
        vis[i]=1;
        d[i]=1;
        for(auto x:adj[i])
        {
            if(!vis[x])
            {
                if(dfs(x,adj))
                return true;
            }
            else if(d[x])
            {
                return true;
            }
        }
        d[i]=0;
       // d[x]=0;
        
        return false;
    }
    bool isCyclic(int V, vector<int> adj[]) {
       int n=V;
       memset(vis,0,sizeof(vis));
       memset(d,0,sizeof(d));
       
       for(int i=0;i<n;i++)
       {
           if(!vis[i])
           {
               if(dfs(i,adj))
               {
                   return true;
               }
           }
       }
       
       return false;
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}
  // } Driver Code Ends