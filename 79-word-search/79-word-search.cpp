class Solution {
public:
    
    int dx[4]={1,-1,0,0};
    int dy[4]={0,0,1,-1};
    int ans=0;
    
    void solve(int i,int j,vector<vector<char>>& b, string &w,int c,vector<vector<int>> &vis)
    {
        if(c==w.size())
        {
            //cout<<c<<" ";
            ans=1;
            return;
        }
        
        for(int k=0;k<4;k++)
        {
            int x=i+dx[k];
            int y=j+dy[k];
            
            if(x>=0 && x<b.size() && y>=0 && y<b[0].size() && b[x][y]==w[c] && !vis[x][y])
            {
                vis[x][y]=1;
                solve(x,y,b,w,c+1,vis);
                vis[x][y]=0;
            }
        }

    }
    
    bool exist(vector<vector<char>>& b, string w) {
        ans=0;
        int n=b.size();
        int m=b[0].size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(b[i][j]==w[0])
                {
                    vector<vector<int>> vis(n,vector<int>(m,0));
                    vis[i][j]=1;
                    solve(i,j,b,w,1,vis);
                    
                    if(ans)
                    {
                        return 1;
                    }
                }
            }
        }
        
        return 0;
    }
};