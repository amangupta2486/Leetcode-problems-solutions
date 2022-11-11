//{ Driver Code Starts
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
        
        priority_queue<int,vector<int>,greater<int>> q;
        
        q.push(S);
        
        vector<int> s(n,1000005);
        
        s[S]=0;
        
        while(!q.empty())
        {
            int i=q.top();
            q.pop();
            
            
            for(auto x:adj[i])
            {
                int j=x[0];
                int w=x[1];
                
               // cout<<j<<" "<<w<<endl;
                
                if(w+s[i]<s[j])
                {
                    s[j]=w+s[i];
                    q.push(j);
                }
            }
        }
        
        return s;
        
        // int mx=0;
        
        // for(int i=0;i<n;i++)
        // {
        //     //cout<<s[i]<<" ";
        //     mx=max(mx,s[i]);
        // }
        
        // return mx;
    }
};


//{ Driver Code Starts.


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