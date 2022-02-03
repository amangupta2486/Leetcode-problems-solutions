// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
    //Function to find if the given edge is a bridge in graph.
    
    bool dfs(vector<int> v[],vector<bool> &vis,int c,int d)
    {
        if(c==d)
        {
            return true;
        }
        
        vis[c]=1;
        
        for(auto i:v[c])
        {
            if(!vis[i])
            {
                if(dfs(v,vis,i,d))
                {
                    return 1;
                }
            }
        }
        
        return false;
    }
    int isBridge(int n, vector<int> adj[], int c, int d) 
    {
        vector<int> v[n];
        vector<bool> vis(n,0);
        
        for(int i=0;i<n;i++)
        {
            for(auto x :adj[i])
            {
                if((x==c && i==d) || (x==d && i==c))
                {
                    continue;
                }

                v[i].push_back(x);
                
            }
        }
        
        return !dfs(v,vis,c,d);
    }
};

// { Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        int i=0;
        while (i++<E) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back (v);
            adj[v].push_back (u);
        }
        
        int c,d;
        cin>>c>>d;
        
        Solution obj;
    	cout << obj.isBridge(V, adj, c, d) << "\n";
    }

    return 0;
}

  // } Driver Code Ends