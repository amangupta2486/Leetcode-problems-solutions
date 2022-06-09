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
        
        int key[n],pr[n];
        bool mst[n];
        
        for(int i=0;i<n;i++)
        {
            key[i]=INT_MAX;
            mst[i]=false;
            pr[i]=-1;
        }
        key[0]=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
        q.push({0,0});
        
        while(!q.empty())
        {
            auto p=q.top();
            q.pop();
            
            int u=p.second;
            mst[u]=true;
            
            for(auto x:adj[u])
            {
                int v=x[0];
                int w=x[1];
                
                if(mst[v]==false && key[v]>w)
                {
                    q.push({w,v});
                    key[v]=w;
                    pr[v]=u;
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