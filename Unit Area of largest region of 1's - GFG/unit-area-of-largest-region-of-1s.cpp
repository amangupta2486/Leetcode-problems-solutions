// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find unit area of the largest region of 1s.
    int dx[8]={1,1,1,-1,-1,-1,0,0};
    int dy[8]={1,0,-1,1,-1,0,1,-1};
    
    void dfs(int i,int j,vector<vector<int>>& g,int &c)
    {
        if(i<0 || j<0 || i>=g.size() || j>=g[0].size() || g[i][j]!=1)
        {
            return;
        }
        
        g[i][j]=2;
        c++;
        
        for(int k=0;k<8;k++)
        {
            int x=i+dx[k];
            int y=j+dy[k];
            
            dfs(x,y,g,c);
        }
    }
    int findMaxArea(vector<vector<int>>& g) {
        
        int n=g.size();
        int m=g[0].size();
        int ans=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(g[i][j]==1)
                {
                    int c=0;
                    dfs(i,j,g,c);
                    ans=max(ans,c);
                }
            }
        }
        
        return ans;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.findMaxArea(grid);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends