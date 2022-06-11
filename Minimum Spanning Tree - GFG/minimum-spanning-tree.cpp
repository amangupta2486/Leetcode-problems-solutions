// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        int n=V;
        vector<int> key(n,100000);
        vector<bool> mst(n,false);
        
         priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
         key[0]=0;
        
         q.push({0,0});
         
         while(!q.empty())
         {
             auto p=q.top();
             q.pop();
             
             int u=p.second;
             mst[u]=true;
             for(auto j:adj[u])
             {
                 int v=j[0];
                 int w=j[1];
                 
                 if(mst[v]==false && key[v]>w)
                 {
                     key[v]=w;
                     q.push({key[v],v});
                 }
             }
         }
         
         int ans=0;
         
         for(int i=0;i<n;i++)
         {
             ans+=key[i];
         }
         
         return ans;
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
        
        Solution obj;
    	cout << obj.spanningTree(V, adj) << "\n";
    }

    return 0;
}

  // } Driver Code Ends