class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        int givencol=image[sr][sc];
        
        if(givencol==newColor)
        {
            return image;    
        }
        
        int n=image.size();
        int m=image[0].size();
        
        queue<vector<int>> q;
        image[sr][sc]=newColor;
        
        q.push({sr,sc});
        
        int dx[4]={1,-1,0,0};
        int dy[4]={0,0 ,1,-1};
        
        while(!q.empty())
        {
            int k=q.size();
            
            while(k--)
            {
                auto p=q.front();
                q.pop();
                
                int i=p[0];
                int j=p[1];
                
                for(int k=0;k<4;k++)
                {
                    int x=i+dx[k];
                    int y=j+dy[k];
                    
                    if(x>=0 && x<n && y>=0 && y<m && image[x][y]==givencol)
                    {
                        image[x][y]=newColor;
                        q.push({x,y});
                    }
                }
            }
        }
        
        return image;
    }
};