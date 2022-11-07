class Solution {
public:
    
    int n,m;
    
    int dx[4]={1,-1,0,0};
    int dy[4]={0,0,1,-1};
    
    int ans=0;
    
    void solve(int i,int j,vector<vector<char>>& b, string &w,vector<vector<int>> &vis,int c,int l)
    {
        if(l==w.size())
        {
            ans=1;
        }
        
        for(int k=0;k<4;k++)
        {
            int x=i+dx[k];
            int y=j+dy[k];
            
            if(x>=0 && x<n && y>=0 && y<m && !vis[x][y] && b[x][y]==w[l])
            {
                vis[x][y]=1;
                solve(x,y,b,w,vis,c+1,l+1);
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
                vector<vector<int>> vis(n,vector<int>(m,0));
                
                vis[i][j]=1;
                
                int c=1;
                
                if(b[i][j]==w[0])
                    
                solve(i,j,b,w,vis,c,1);
                
            }
        }
        
        return ans;
    }
};