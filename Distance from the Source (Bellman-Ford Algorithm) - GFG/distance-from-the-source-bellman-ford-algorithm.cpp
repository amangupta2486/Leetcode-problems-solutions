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
    vector <int> bellman_ford(int V, vector<vector<int>> adj, int S) {
        
        int n=V;
        
        vector<int> key(n,100000000);
        
        vector<vector<int>> v[n];
        
        for(auto i:adj)
        {
            v[i[0]].push_back({i[1],i[2]});
        }
        
        key[S]=0;
        
        for(int c=1;c<n;c++)
        {
            for(int u=0;u<n;u++)
            {
                for(auto j:v[u])
                {
                    int v=j[0];
                    int w=j[1];
                    
                    if(key[u]+w<key[v])
                    {
                        key[v]=key[u]+w;
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