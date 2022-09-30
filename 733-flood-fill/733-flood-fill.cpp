class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& g, int sr, int sc, int color) {
        
        if(g[sr][sc]==color)
        {
            return g;
        }
        
        int n=g.size();
        int m=g[0].size();
        
        queue<vector<int>> q;
        
        int col=g[sr][sc];
        
        g[sr][sc]=color;
        
        q.push({sr,sc});
        
        int dx[4]={1,-1,0,0};
        int dy[4]={0,0,1,-1};
        
        while(!q.empty())
        {
            auto l=q.size();
            
            while(l--)
            {
                auto p=q.front();
                q.pop();
                
                int i=p[0];
                int j=p[1];
                
                for(int k=0;k<4;k++)
                {
                    int x=i+dx[k];
                    int y=j+dy[k];
                    
                    if(x>=0 && x<n && y>=0 && y<m && g[x][y]==col)
                    {
                        g[x][y]=color;
                        q.push({x,y});
                    }
                }
            }
        }
        
        return g;
    }
};