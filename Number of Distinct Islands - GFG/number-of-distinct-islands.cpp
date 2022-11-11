//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    
    void solve(int i,int j,int x,int y,vector<vector<int>>& g,vector<vector<int>> &v)
    {
        if(i<0 || j<0 || i>=g.size() || j>=g[0].size() || g[i][j]!=1)
        {
            return;
        }
        
        v.push_back({x,y});
        
        g[i][j]=2;
        
        solve(i+1,j,x+1,y,g,v);
        solve(i,j+1,x,y+1,g,v);
        solve(i-1,j,x-1,y,g,v);
        solve(i,j-1,x,y-1,g,v);
    }
    
    int countDistinctIslands(vector<vector<int>>& g) {
        
        int n=g.size();
        int m=g[0].size();
        
        int cnt=0;
        
        set<vector<vector<int>>> mp;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(g[i][j]==1)
                {
                    vector<vector<int>> v;
                    solve(i,j,0,0,g,v);
                    mp.insert(v);
                }
            }
        }
        
        return mp.size();
       // return 0;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.countDistinctIslands(grid) << endl;
    }
}
// } Driver Code Ends