// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    int vis[100005];
    int ans=0;
    
    void dfs(int i,int p,vector<int> adj[])
    {
        vis[i]=1;
        
        for(auto j:adj[i])
        {
            if(!vis[j])
            {
                dfs(j,i,adj);
            }
            
            else if(j!=p)
            {
                ans=1;
            }
        }
        
    }
    bool isCycle(int V, vector<int> adj[]) {
        
        memset(vis,0,sizeof(vis));
        
        int n=V;
        
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                dfs(i,-1,adj);
            }
        }
        
        return ans;
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