// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    
    vector<int> v[10005];
     int vis[10005];
     int col[10005];
     
    void dfs(int i,int c,vector<int> g[])
    {
        vis[i]=1;
        col[i]=c;
        
        for(auto j:g[i])
        {
            if(!vis[j])
            {
                int p=1^c;
                dfs(j,p,g);
            }
        }
        
        return;
    }
    
    
    int countOfNodes(vector<int> g[], int n)
    {
       memset(vis,0,sizeof(vis));
       memset(col,0,sizeof(col));
       
    //   for(int i=1;i<=n;i++)
    //   {
    //       for(auto j:g[i])
    //       {
    //           v[i].push_back(j);
    //           v[j].push_back(i);
    //       }
    //       // cout<<" ";
    //   }
        
       dfs(1,0,g);
       
       int c1=0,c2=0;
       
       for(int i=1;i<=n;i++)
       {
           if(col[i]==0)
           {
               c1++;
           }
           else
           {
               c2++;
           }
       }
       
       int p=(c1*(c1-1))/2;
       int q=(c2*(c2-1))/2;
       
       return p+q;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>graph[n+1];
        for(int i=0;i<n-1;i++){
            int u, v;
            cin >> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        Solution ob;
        cout<<ob.countOfNodes(graph, n)<<endl;
    }
    return 0;
}  // } Driver Code Ends