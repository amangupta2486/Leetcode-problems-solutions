class Solution {
public:
    
    int n,m;
    int ans=0;
    
    int dx[4]={1,-1,0,0};
    int dy[4]={0,0,1,-1};
    
    void solve(int i,int j,vector<vector<char>>& b, string w,vector<vector<int>> &vis,int l)
    {
        if(l==w.size())
        {
            ans=1;
            return;
        }
        
        for(int k=0;k<4;k++)
        {
            int x=i+dx[k];
            int y=j+dy[k];
            
            if(x>=0 && x<n && y>=0 && y<m && !vis[x][y] && b[x][y]==w[l])
            {
                vis[x][y]=1;
                solve(x,y,b,w,vis,l+1);
                vis[x][y]=0;
            }
        }
    }
    
    bool exist(vector<vector<char>>& b, string w) {
        
        n=b.size();
        m=b[0].size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(b[i][j]==w[0])
                {
                    vector<vector<int>> vis(n,vector<int>(m,0));
                    
                    vis[i][j]=1;
                    
                    solve(i,j,b,w,vis,1);
                }
            }
        }
        
        return ans;
    }
};