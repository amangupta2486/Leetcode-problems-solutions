// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        int n=V;
        vector<int> key(n,100000);
        
         priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
         key[S]=0;
         
         q.push({0,S});
         
         while(!q.empty())
         {
             auto p=q.top();
             q.pop();
             
             int u=p.second;
             
             for(auto j:adj[u])
             {
                 int v=j[0];
                 int w=j[1];
                 
                 if(key[v]>key[u]+w)
                 {
                     key[v]=key[u]+w;
                     q.push({key[v],v});
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
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        int S;
        cin>>S;
        
        Solution obj;
    	vector<int> res = obj.dijkstra(V, adj, S);
    	
    	for(int i=0; i<V; i++)
    	    cout<<res[i]<<" ";
    	cout<<endl;
    }

    return 0;
}

  // } Driver Code Ends