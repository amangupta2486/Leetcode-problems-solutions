class Solution {
public:
    int countServers(vector<vector<int>>& g) {
        
        int n=g.size();
        int m=g[0].size();
        
        int ans=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(g[i][j]==1)
                {
                    int x=i;
                    
                    int f=0;
                    
                    for(int k=0;k<m;k++)
                    {
                        if(g[x][k]==1 && k!=j)
                        {
                            f=1;
                            break;
                        }
                    }
                    
                    if(f==1)
                    {
                        ans++;
                        continue;
                    }
                    
                     for(int k=0;k<n;k++)
                    {
                        if(g[k][j]==1 && k!=i)
                        {
                            f=1;
                            break;
                        }
                    }
                    
                    if(f==1)
                    {
                        ans++;
                        continue;
                    }
                    
                }
            }
        }
        
        return ans;
    }
};