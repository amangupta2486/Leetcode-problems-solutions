// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    int vis[100005];
    int ans=0;
    int dfs[100005];
    
    bool solve(int i,vector<int> adj[])
    {
        vis[i]=1;
        dfs[i]=1;
        
        for(auto j:adj[i])
        {
            if(!vis[j])
            {
                if(solve(j,adj))
                {
                    return 1;
                }
            }
            
            else if(dfs[j])
            {
                return 1;
            }
        }
        dfs[i]=0;
        
        return 0;
    }
    bool isCyclic(int V, vector<int> adj[]) {
        
        memset(vis,0,sizeof(vis));
        memset(dfs,0,sizeof(dfs));
        
        int n=V;
        
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                if(solve(i,adj))
                {
                    return 1;
                }
            }
        }
        
        return 0;
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