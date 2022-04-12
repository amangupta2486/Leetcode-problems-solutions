class Solution {
public:
    void gameOfLife(vector<vector<int>>& g) {
        
        int n=g.size();
        int m=g[0].size();
        
        int dx[8]={1,1,-1,-1,1,-1,0,0};
        int dy[8]={-1,1,-1,1,0,0,1,-1};
        
        vector<vector<int>> b(n,vector<int>(m));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                b[i][j]=g[i][j];
                //cout<<b[i][j]<<" ";
            }
            //cout<<endl;
        }
        
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int c=0;
                
                for(int k=0;k<8;k++)
                {
                    int x=i+dx[k];
                    int y=j+dy[k];
                    
                    if(x>=0 && x<n && y>=0 && y<m && g[x][y]==1)
                    {
                        c++;
                    }
                }
                //cout<<c<<" ";
                if(g[i][j]==1)
                {
                    if(c<2)
                    {
                        b[i][j]=0;
                    }
                    
                    if(c>3)
                    {
                        b[i][j]=0;
                    }
                }
                else
                {
                    if(c==3)
                    {
                        b[i][j]=1;
                    }
                }
            }
            //cout<<endl;
        }
        
       for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                g[i][j]=b[i][j];
            }
        }
         
    }
};