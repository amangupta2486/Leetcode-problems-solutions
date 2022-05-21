class Solution {
public:
    
    int dx[4]={1,-1,0,0};
    int dy[4]={0,0,1,-1};
    int ans=0;
   // int vis[10][10];
    void solve(vector<vector<char>>& b, string w,int i,int j,int n,int m,int z,vector<vector<int>> &vis)
    {
        if(z==w.size())
        {
            ans=1;
            return;
        }
        
        for(int k=0;k<4;k++)
        {
            int x=i+dx[k];
            int y=j+dy[k];
            
            if(x>=0 && x<n && y>=0 && y<m && b[x][y]==w[z] && !vis[x][y])
            {
                //cout<<w[z];
                vis[x][y]=1;
                solve(b,w,x,y,n,m,z+1,vis);
                vis[x][y]=0;
            }
        }
    }
    bool exist(vector<vector<char>>& b, string w) {
        
        int n=b.size();
        int m=b[0].size();
 
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(b[i][j]==w[0])
                {
                  //  memset(vis,0,sizeof(vis));
                    vector<vector<int>> vis(n,vector<int>(m,0));
                    vis[i][j]=1;
                    solve(b,w,i,j,n,m,1,vis);
                  //cout<<endl;
                }
            }
        }
        
        return ans;
    }
};