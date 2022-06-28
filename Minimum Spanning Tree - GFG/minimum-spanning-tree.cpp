// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
	
	int dsu[1005];
	
	int find(int x)
	{
	    while(x!=dsu[x])
	    {
	        x=dsu[x];
	    }
	    
	    return x;
	}
	
	void Union(int a,int b)
	{
	    int x=find(a);
	    int y=find(b);
	    
	    if(x!=y)
	    {
	        dsu[y]=x;
	    }
	}
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        int n=V;
        
        for(int i=0;i<n;i++)
        {
            dsu[i]=i;
        }
        //queue<vector<int>,vector<vector<int>>,greater<vector<int>> q;
        
        vector<vector<int>> v;
        
        for(int i=0;i<n;i++)
        {
            for(auto j:adj[i])
            {
                v.push_back({j[1],i,j[0]});
            }
        }
        
        sort(v.begin(),v.end());
        
        int ans=0;
        
        for(auto i:v)
        {
            int w=i[0];
            int u=i[1];
            int v=i[2];
            
            if(find(u)!=find(v))
            {
                ans+=w;
                Union(u,v);
            }
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