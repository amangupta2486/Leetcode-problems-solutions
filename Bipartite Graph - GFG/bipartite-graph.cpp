// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    
    int vis[100005];
    int col[100005];
    
    bool solve(int i,int c,vector<int>adj[])
    {
        vis[i]=1;
        col[i]=c;
        
        for(auto j:adj[i])
        {
            if(!vis[j])
            {
                int x=c^1;
                if(solve(j,x,adj)==false)
                {
                    return false;
                }
            }
            else if(c==col[j])
            {
                return false;
            }
            
        }
        
        return true;
    }
    
	bool isBipartite(int v, vector<int>adj[]){
	    
	    memset(vis,0,sizeof(vis));
	    memset(col,0,sizeof(col));
	    
	    for(int i=0;i<v;i++)
	    {
	        if(!vis[i])
	        {
	            if(solve(i,0,adj)==false)
	            {
	                return false;
	            }
	        }
	    }
	    return true;
	}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}  // } Driver Code Ends