// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    int vis[100005];
    
    bool dfs(int i,vector<int> adj[],int p)
    {
        vis[i]=1;
        
        for(auto x:adj[i])
        {
            if(!vis[x])
            {
                if(dfs(x,adj,i))
                {
                    return true;
                }
            }
            else if(x!=p)
            {
                return true;
            }
        }
        
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        
       int n=V;
       memset(vis,0,sizeof(vis));
       
       for(int i=0;i<n;i++)
       {
           if(!vis[i])
           {
               if(dfs(i,adj,-1))
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
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}  // } Driver Code Ends