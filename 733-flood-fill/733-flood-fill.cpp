class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        int n=image.size();
        int m=image[0].size();
        
        int currcol=image[sr][sc];
        
        if(currcol==color)
        {
            return image;
        }
        
        int dx[4]={1,-1,0,0};
        int dy[4]={0,0,1,-1};
        
        queue<vector<int>> q;
        
        image[sr][sc]=color;
        
        q.push({sr,sc});
        
        while(!q.empty())
        {
            int l=q.size();
            
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
                    
                    if(x>=0 && x<n && y>=0 && y<m && image[x][y]==currcol)
                    {
                        image[x][y]=color;
                        q.push({x,y});
                    }
                }
                
            }
        }
        
        return image;
    }
};