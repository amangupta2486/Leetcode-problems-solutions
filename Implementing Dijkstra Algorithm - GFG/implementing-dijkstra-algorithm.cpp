// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int v, vector<vector<int>> adj[], int s)
    {
       int n=v;
        
        vector<int> key(n);
        int pr[n];
        bool mst[n];
        
        for(int i=0;i<n;i++)
        {
            key[i]=INT_MAX;
            mst[i]=false;
            pr[i]=-1;
        }
        key[s]=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
        q.push({0,s});
        
        while(!q.empty())
        {
            auto p=q.top();
            q.pop();
            
            int u=p.second;

            for(auto x:adj[u])
            {
                int v=x[0];
                int w=x[1];
                
                if(key[v]>w+key[u])
                {
                    key[v]=w+key[u];
                    q.push({w,v});
                    pr[v]=u;
                }
            }
        }
        
        // queue<int> p;
        // p.push(s);
        
        // while(!q.empty())
        // {
        //     int r=p.front();
        //     p.pop();
            
        //     for(int i=0;i<n;i++)
        //     {
        //         if(pr[i]==r)
        //         {
        //             key[i]+=key[r];
        //         }
        //     }
        // }
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