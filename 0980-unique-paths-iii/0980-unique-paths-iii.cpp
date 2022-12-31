class Solution {
public:
    int n,m;
    int dx[4]={1,-1,0,0};
    int dy[4]={0,0,1,-1};
    
    int solve(int i,int j,int p,int q,vector<vector<int>>& g,int cnt,int c)
    {
        if(p==i && q==j && c==cnt)
        {
            //cout<<c<<endl;
            return 1;
        }
        
        int ans=0;
        
        for(int k=0;k<4;k++)
        {
            int x=i+dx[k];
            int y=j+dy[k];
            
            if(x>=0 && x<n && y>=0 && y<m && (g[x][y]==0 ||g[x][y]==2))
            {
                //cout<<x<<" "<<y<<",";
                g[x][y]=1;
                ans+=solve(x,y,p,q,g,cnt,c+1);
                //cout<<endl;
                g[x][y]=0;
            }
        }
        
        return ans;
    }
    
    int uniquePathsIII(vector<vector<int>>& g) {
        
        n=g.size();
        m=g[0].size();
        
        int sx=0,sy=0,ex=0,ey=0,cnt=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(g[i][j]==1)
                {
                    sx=i;
                    sy=j;
                }
                if(g[i][j]==2)
                {
                    ex=i;
                    ey=j;
                }
                if(g[i][j]!=-1)
                {
                    cnt++;
                }
            }
        }
        g[sx][sy]=1;
        
        return solve(sx,sy,ex,ey,g,cnt,1);
    }
};