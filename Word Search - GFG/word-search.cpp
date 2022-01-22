// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:

    int dx[4]={0,0,1,-1};
    int dy[4]={1,-1,0,0};
    
    //string q=RLDU;
    
    int f=0;
    
    void solve(int i,int j,int r,string p,vector<vector<bool>> &vis,vector<vector<char>>& b,int n,int m,string w,int l)
    {
        if(i==n || j==m || r==l) 
        {
            if(p==w)
            {
                f=1;
            }
            
            return;
        }
        
        if(p==w)
        {
            f=1;
            //return;
        }
        //cout<<p<<" ";
        for(int k=0;k<4;k++)
        {
            int x=i+dx[k];
            int y=j+dy[k];
            //cout<<x<<" "<<y<<" ";
            if(x>=0 && y>=0 && x<n && y<m && !vis[x][y] && w[r]==b[x][y])
            {
                vis[x][y]=1;
                solve(x,y,r+1,p+w[r],vis,b,n,m,w,l);
                vis[x][y]=0;
            }
          
        }
    }
    bool isWordExist(vector<vector<char>>& b, string w) {
       
       int n=b.size();
       int m=b[0].size();
       
       int l=w.size();
       
       vector<vector<bool>> vis(n,vector<bool>(m,0));
       
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++)
           {
               if(f==0)
               solve(i,j,0,"",vis,b,n,m,w,l);
           }
       }
       
       
       return f;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>board(n, vector<char>(m, '*'));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				cin >> board[i][j];
		string word;
		cin >> word;
		Solution obj;
		bool ans = obj.isWordExist(board, word);
		if(ans)
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}  // } Driver Code Ends