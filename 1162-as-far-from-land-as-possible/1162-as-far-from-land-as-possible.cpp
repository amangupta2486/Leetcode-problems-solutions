class Solution {
public:
    int maxDistance(vector<vector<int>>& g) {
        
        int n=g.size();
        int m=g[0].size();
        
        queue<vector<int>> q;
        
        int f1=0 , f2=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(g[i][j]==1)
                {
                    f1=1;
                    q.push({i,j,0});
                }
                
                else
                {
                    f2=1;
                }
            }
        }
        
        if(f1==0 || f2==0)
        {
            return -1;
        }
        
        int ans=0;
        
        int dx[4]={-1,1,0,0};
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
                int c=p[2];
                
                ans=max(ans,c);
                
                for(int k=0;k<4;k++)
                {
                    int x=i+dx[k];
                    int y=j+dy[k];
                    
                    if(x>=0 && x<n && y>=0 && y<m && g[x][y]==0)
                    {
                        g[x][y]=1;
                        q.push({x,y,c+1});
                    }
                }
            }
        }
        
        return ans;
    }
};