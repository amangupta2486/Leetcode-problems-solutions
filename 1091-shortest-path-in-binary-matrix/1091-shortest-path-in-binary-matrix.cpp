class Solution {
public:
    
    int dx[8]={1,-1,0,0,1,1,-1,-1};
    int dy[8]={0,0,1,-1,1,-1,1,-1};
    
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
                
                int x=p[0];
                int y=p[1];
                int c=p[2];
                
                if(x==n-1 && y==m-1)
                {
                    return c;
                }
                
                for(int k=0;k<8;k++)
                {
                    int i=x+dx[k];
                    int j=y+dy[k];
                    
                    if(i>=0 && j>=0 && i<n && j<m && g[i][j]==0)
                    {
                        g[i][j]=1;
                        
                        q.push({i,j,c+1});
                    }
                }
            }
        }
        
        return -1;
    }
};