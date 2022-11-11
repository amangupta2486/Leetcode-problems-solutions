//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    
    bool dfs(int i,int p,vector<int> adj[],int *vis)
    {
        vis[i]=1;
        
        for(auto j:adj[i])
        {
            if(!vis[j])
            {
                if(dfs(j,i,adj,vis))
                {
                    return 1;
                }
            }
            
            else
            {
                if(p!=j)
                return 1;
            }
        }
        
        return 0;
    }
    
    bool isCycle(int V, vector<int> adj[]) {
        
        int n=V;
        
        int vis[n];
        memset(vis,0,sizeof(vis));
        
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                if(dfs(i,-1,adj,vis))
                return 1;
            }
        }
        
        return 0;
    }
};

//{ Driver Code Starts.
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
}
// } Driver Code Ends