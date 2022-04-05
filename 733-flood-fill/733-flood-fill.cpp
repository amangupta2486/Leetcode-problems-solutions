class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& g, int sr, int sc, int l) {
        
        int n=g.size();
        int m=g[0].size();
        
        int c=0;
        
        c=g[sr][sc];
        
        if(c==l)
        {
            return g;
        }
        
        int dx[4]={0,0,1,-1};
        int dy[4]={1,-1,0,0};
        
        queue<vector<int>> q;
        
        q.push({sr,sc});
        g[sr][sc]=l;
        
        while(!q.empty())
        {
            int k=q.size();
            while(k--)
            {
                auto p=q.front();
                q.pop();
                
                int i=p[0];
                int j=p[1];
                              
                for(int z=0;z<4;z++)
                {
                    int x=i+dx[z];
                    int y=j+dy[z];
                    
                    if(x>=0 && x<n && y>=0 && y<m && g[x][y]==c)
                    {
                        g[x][y]=l;
                        q.push({x,y});
                    }
                }
            }
        }
        
        return g;
    }
};


// [[0,0,0],[0,1,1]]
// 1
// 1
// 1