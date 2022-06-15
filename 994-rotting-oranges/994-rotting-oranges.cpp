class Solution {
public:
    int orangesRotting(vector<vector<int>>& g) {
        
        int n=g.size();
        int m=g[0].size();
        
        queue<vector<int>> q;
        
        int cnt=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(g[i][j]==2)
                {
                    q.push({i,j});
                    cnt++;
                }
                else if(g[i][j]==1)
                {
                    cnt++;
                }
            }
        }
        
        int ans=0,d=0;
        
        int dx[4]={1,-1,0,0};
        int dy[4]={0,0,1,-1};
        
        while(!q.empty())
        {
            int l=q.size();
            ans+=l;
            
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
                    
                    if(x>=0 && x<n && y>=0 && y<m && g[x][y]==1)
                    {
                        g[x][y]=2;
                        q.push({x,y});
                    }
                }
            }
            
            if(!q.empty())
            {
                d++;
            }
        }
        
        return ans==cnt ? d : -1;
    }
};