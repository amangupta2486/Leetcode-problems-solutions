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
        
        int key[n],mst[n],p[n];
        
        for(int i=0;i<n;i++)
        {
            key[i]=INT_MAX;
            mst[i]=0;
            p[i]=-1;
        }
        
        key[0]=0;
        
        priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>> q;
        
        q.push({0,0});
        
        while(!q.empty())
        {
            auto r=q.top();
            q.pop();
            
            int u=r[1];
            //cout<<u<<" ";
            mst[u]=1;
            
            for(auto j:adj[u])
            {
                int v=j[0];
                int w=j[1];
                
                if(!mst[v] && w<key[v])
                {
                    key[v]=w;
                    p[v]=u;
                    q.push({w,v});
                }
            }
        }
        
        int ans=0;
        
        for(int i=0;i<n;i++)
        {
            //cout<<key[i]<<" ";
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