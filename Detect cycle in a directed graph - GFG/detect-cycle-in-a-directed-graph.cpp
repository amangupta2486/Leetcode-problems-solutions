// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph
    
    int vis[100005];
    
    bool ans=false;
    bool dfs(int i,int p,vector<int> adj[])
    {
        vis[i]=1;
       // cout<<i<<"->";
        for(auto j:adj[i])
        {
            if(!vis[j])
            {
                dfs(j,i,adj);
            }
            else
            {
                ans=true;
            }
        }
    }
    
    bool isCyclic(int V, vector<int> adj[]) {
        
        memset(vis,0,sizeof(vis));
        
       // dfs(0,-1,adj);
       
	   vector<int> d(V,0);
	    
	    for(int i=0;i<V;i++)
	    {
	        for(auto x:adj[i])
	        {
	            d[x]++;
	        }
	    }
	    
	    
	    queue<int> q;
	    
	    for(int i=0;i<V;i++)
	    {
	        if(d[i]==0)
	        {
	            q.push(i);
	        }
	    }
	    
	    vector<int> ans;
	    int c=0;
	    
	    while(!q.empty())
	    {
	        int k=q.size();
	        
	        while(k--)
	        {
	            auto p=q.front();
	            q.pop();
	            
	            c++;
	            ans.push_back(p);
	            
	            for(auto x:adj[p])
	            {
	                d[x]--;
	                
	                if(d[x]==0)
	                {
	                    q.push(x);
	                }
	            }
	        }
	    }

	    return c==V ? 0 : 1;
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