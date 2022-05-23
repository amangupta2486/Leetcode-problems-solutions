// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    int vis[100005];
    
    bool dfs(int i,int p, vector<int> adj[])
    {
        vis[i]=1;
        //cout<<i<<"->";
        for(auto j:adj[i])
        {
            if(!vis[j])
            {
                if(dfs(j,i,adj))
                {
                    return true;
                }
            }
            
            else if(j!=p)
            {
                return true;
            }
        }
        
        return false;
    }
    bool isCycle(int v, vector<int> adj[]) {
        
        memset(vis,0,sizeof(vis));
        
        for(int i=0;i<v;i++)
        {
            if(!vis[i])
            {
                if(dfs(i,-1,adj))
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