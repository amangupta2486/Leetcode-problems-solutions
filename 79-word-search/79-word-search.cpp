class Solution {
public:
    
    int n,m;
    
    int dx[4]={1,-1,0,0};
    int dy[4]={0,0,-1,1};
    
    int ans=0;
    
    void solve(int i,int j,vector<vector<char>>& b, string &w,int l,vector<vector<int>> &v)
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
            
            if(x>=0 && x<n && y>=0 && y<m && b[x][y]==w[l] && v[x][y]==0)
            {
                v[x][y]=1;
                solve(x,y,b,w,l+1,v);
                v[x][y]=0;
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
                    vector<vector<int>> v(n,vector<int>(m,0));
                    
                    v[i][j]=1;
                    
                    solve(i,j,b,w,1,v);
                }
            }
        }
        
        return ans;
    }
};

/*


[["A","B","C","E"],
 ["S","F","E","S"],
 ["A","D","E","E"]]
 
 "ABCESEEEFS"

*/