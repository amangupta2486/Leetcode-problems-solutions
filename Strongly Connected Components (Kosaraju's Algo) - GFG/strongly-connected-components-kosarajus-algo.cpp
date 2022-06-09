// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
	public:
	
	void revdfs(int i,int *vis,vector<int> t[])
	{
	    vis[i]=1;
	    
	    for(auto j:t[i])
	    {
	        if(!vis[j])
	        {
	            revdfs(j,vis,t);
	        }
	    }
	}
	void dfs(int i,stack<int> &s,int *vis,vector<int> adj[])
	{
	    vis[i]=1;
	    
	    for(auto j:adj[i])
	    {
	        if(!vis[j])
	        {
	            dfs(j,s,vis,adj);
	        }
	    }
	    
	    s.push(i);
	}
	//Function to find number of strongly connected components in the graph.
    int kosaraju(int V, vector<int> adj[])
    {
        int n=V;
        vector<int> t[n];
        
        int vis[n];
        memset(vis,0,sizeof(vis));
        stack<int> s;
        
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                dfs(i,s,vis,adj);
            }
        }
        
        for(int i=0;i<n;i++)
        {
            vis[i]=0;
            
            for(auto j:adj[i])
            {
                t[j].push_back(i);
            }
        }
        
        int c=0;
        
        while(!s.empty())
        {
            int u=s.top();
            s.pop();
            
            if(!vis[u])
            {
                revdfs(u,vis,t);
                c++;
            }
        }
        
        return c;
    }
};

// { Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    	}

    	Solution obj;
    	cout << obj.kosaraju(V, adj) << "\n";
    }

    return 0;
}

  // } Driver Code Ends