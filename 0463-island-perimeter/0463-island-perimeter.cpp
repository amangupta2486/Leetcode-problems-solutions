class Solution {
public:
    
    bool check(vector<vector<int>>& g,int x,int y)
    {
        if(x<0 || y<0 || x>=g.size() || y>=g[0].size() || g[x][y]==0)
        {
            return 1;
        }
        
        return 0;
    }
    
    int islandPerimeter(vector<vector<int>>& g) {
        
        int n=g.size();
        int m=g[0].size();
        
        int dx[4]={1,-1,0,0};
        int dy[4]={0,0,1,-1};
        
        int cnt=0;
        
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
                        
                        if(check(g,x,y))
                        {
                            cnt++;
                        }
                    }
                    
                }
            }
        }
        
        return cnt;
    }
};