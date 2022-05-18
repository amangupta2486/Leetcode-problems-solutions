class Solution {
public:
    
    bool check(int x,int y,int n,int m)
    {
        return x<0 || x>=n || y<0 || y>=m;
    }
    int islandPerimeter(vector<vector<int>>& g) {
        
        int n=g.size();
        int m=g[0].size();
        
        int dx[4]={1,-1,0,0};
        int dy[4]={0,0 ,1,-1};
        
        int ans=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(g[i][j]==1)
                {
                    
                    for(int k=0;k<4;k++)
                    {
                        int x=i+dx[k];
                        int y=j+dy[k];
                        
                        if(check(x,y,n,m))
                        {
                            ans++;
                        }
                        
                        if(x>=0 && x<n && y>=0 && y<m && g[x][y]==0)
                        {
                            ans++;
                        }
                    }
                }
            }
        }
        
        return ans;
    }
};