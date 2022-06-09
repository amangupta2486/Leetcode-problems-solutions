// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
	public:
	/*  Function to implement Dijkstra
    *   adj: vector of vectors which represents the graph
    *   S: source vertex to start traversing graph with
    *   V: number of vertices
    */
    vector <int> bellman_ford(int V, vector<vector<int>> v, int s) {
        int n=V;
        
        vector<vector<int>> adj[n];
        
        for(auto i:v)
        {
            adj[i[0]].push_back({i[1],i[2]});
        }
        vector<int> key(n,100000000);
        key[s]=0;
        
        for(int c=0;c<=n-1;c++)
        {
            for(int i=0;i<n;i++)
            {
                for(auto j:adj[i])
                {
                    int w=j[1];
                    int x=j[0];
                    if(key[x]>w+key[i])
                    {
                       key[x]=w+key[i]; 
                    }
                }
            }
        }
        return key;
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
        vector<vector<int>> adj;
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1;
            t1.push_back(u);
            t1.push_back(v);
            t1.push_back(w);
            adj.push_back(t1);
        }
        int S;
        cin>>S;
        
        Solution obj;
    	vector<int> res = obj.bellman_ford(V, adj, S);
    	
    	for(int i=0; i<V; i++)
    	    cout<<res[i]<<" ";
    	cout<<endl;
    }

    return 0;
}

  // } Driver Code Ends