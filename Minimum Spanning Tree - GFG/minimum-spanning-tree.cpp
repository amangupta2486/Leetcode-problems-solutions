// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int v, vector<vector<int>> adj[])
    {
        int n=v;
        
        int key[n],p[n];
        bool mst[n];
        
        for(int i=0;i<n;i++)
        {
            key[i]=INT_MAX;
            mst[i]=false;
            p[i]=-1;
        }
        key[0]=0;
        
        for(int c=0;c<n-1;c++)
        {
            int mini=INT_MAX,u;
            
            for(int v=0;v<n;v++)
            {
                if(mst[v]==false && key[v]<mini)
                {
                    mini=key[v];
                    u=v;
                }
            }
            
            mst[u]=true;
            
            for(auto x:adj[u])
            {
                int v=x[0];
                int w=x[1];
                
                if(mst[v]==false && key[v]>w)
                {
                    key[v]=w;
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