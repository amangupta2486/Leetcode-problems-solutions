class Solution {
public:
    
    int dx[8]={1,1,-1,-1,0,0,1,-1};
    int dy[8]={1,-1,-1,1,1,-1,0,0};
    
    void gameOfLife(vector<vector<int>>& b) {
        
        int n=b.size();
        int m=b[0].size();
        
      
        
        vector<vector<int>> v(n,vector<int>(m,0));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)            
            {
  
                int c=0;
               
                for(int k=0;k<8;k++)
                {
                    int x=i+dx[k];
                    int y=j+dy[k];
                    
                    if(x>=0 && x<n && y>=0 && y<m && b[x][y]==1)
                    {
                        c++;
                    }
                }
                 //cout<<i<<" "<<j<<" "<<c<<endl;
                if(b[i][j]==1)
                {
                    if(c<2)
                    {
                        v[i][j]=0;
                    }
                    else if(c==2 || c==3)
                    {
                        v[i][j]=1;
                    }
                    else if(c>3)
                    {
                        v[i][j]=0;
                    }
                }
                else if(b[i][j]==0)
                {
                    if(c==3)
                    {
                        v[i][j]=1;
                    }
                }
            }   
        }
        
        b=v;
        
    }
};