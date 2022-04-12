class Solution {
public:
    int countServers(vector<vector<int>>& g) {
        
        int n=g.size();
        int m=g[0].size();
        
        int ans=0;
        
        set<vector<int>> s;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(g[i][j]==1)
                {
                    int x=i;
                    int y=j;
                    
                    while(x-1>=0)
                    {
                        x--;
                        if(g[x][j]==1)
                        {
                            s.insert({x,j});
                            ans++;
                        }
                    }
                    x=i;
                    
                    while(x+1<n)
                    {
                        x++;
                        if(g[x][j]==1)
                        {
                            s.insert({x,j});
                            ans++;
                        }
                    }
                    
                    
                    while(y-1>=0)
                    {
                        y--;
                        if(g[i][y]==1)
                        {
                            s.insert({i,y});
                            ans++;
                        }
                    }
                    y=j;
                    
                    while(y+1<m)
                    {
                        y++;
                        if(g[i][y]==1)
                        {
                            s.insert({i,y});
                            ans++;
                        }
                    }
                }
            }
        }
        
        return s.size();
    }
};