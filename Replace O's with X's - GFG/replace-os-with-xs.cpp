// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int dx[4]={1,-1,0,0};
    int dy[4]={0,0,1,-1};
    
    void dfs(vector<vector<char>> &g,int i,int j,int n,int m)
    {
        if(i<0 || i>=n || j<0 || j>=m || g[i][j]!='O')
        {
            return;
        }
        
        g[i][j]='_';
        
        dfs(g,i-1,j,n,m);
        dfs(g,i,j-1,n,m);
        dfs(g,i+1,j,n,m);
        dfs(g,i,j+1,n,m);
        
    }
    vector<vector<char>> fill(int n, int m, vector<vector<char>> g)
    {
         for(int i=0;i<n;i++)
        {
            if(g[i][0]=='O')
            {
                dfs(g,i,0,n,m);
            }
        }
        for(int i=0;i<n;i++)
        {
            if(g[i][m-1]=='O')
            {
                dfs(g,i,m-1,n,m);
            }
        }
        
        for(int j=0;j<m;j++)
        {
            if(g[0][j]=='O')
            {
                dfs(g,0,j,n,m);
            }
        }
        for(int j=0;j<m;j++)
        {
            if(g[n-1][j]=='O')
            {
                dfs(g,n-1,j,n,m);
            }
        }
        
        
         for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(g[i][j]=='O')
                {
                    g[i][j]='X';
                }
            }
        }
        
         for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(g[i][j]=='_')
                {
                    g[i][j]='O';
                }
            }
        }
        
        return g;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for(int i = 0;i < n;i++)
            for(int j=0; j<m; j++)
                cin>>mat[i][j];
        
        Solution ob;
        vector<vector<char>> ans = ob.fill(n, m, mat);
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}  // } Driver Code Ends