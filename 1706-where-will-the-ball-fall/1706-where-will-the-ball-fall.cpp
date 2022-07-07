class Solution {
public:
    vector<int> findBall(vector<vector<int>>& g) {
        
        int n=g.size();
        int m=g[0].size();
        
        vector<int> a(m,-1);
        
        for(int i=0;i<m;i++)
        {
            int x=0,y=i;
            
            while(true)
            {
                if(x>=n)
                {
                    //cout<<1<<endl;
                    if(y>=0 && y<m)
                    {
                        a[i]=y;
                        
                    }
                    break;
                }
                else
                {
                    if(y+1<m && g[x][y]==1 && g[x][y+1]==1)
                    {
                        x++;
                        y++;
                    }
                    
                    else if(y-1>=0 && g[x][y]==-1 && g[x][y-1]==-1)
                    {
                        x++;
                        y--;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
        
        return a;
    }
};