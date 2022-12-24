class Solution {
public:
    
    int dx[8]={1,1,1,-1,-1,-1,0,0};
    int dy[8]={-1,0,1,1,0,-1,-1,1};
    
    int shortestPathBinaryMatrix(vector<vector<int>>& g) {
        
        int n=g.size();
        int m=g[0].size();
        
        if(g[0][0]==1)
        {
            return -1;
        }
        
        queue<vector<int>> q;
        
        q.push({0,0,1});
        
        while(!q.empty())
        {
            int l=q.size();
            
            while(l--)
            {
                auto p=q.front();
                q.pop();
                
                int i=p[0];
                int j=p[1];
                int c=p[2];
                
                if(i==n-1 && j==m-1)
                {
                    return c;
                }
                
                for(int k=0;k<8;k++)
                {
                    int x=i+dx[k];
                    int y=j+dy[k];
                    
                    if(x>=0 && y>=0 && x<n && y<m && !g[x][y])
                    {
                        g[x][y]=1;
                        q.push({x,y,c+1});
                    }
                }
            }
        }
        
        return -1;
    }
};