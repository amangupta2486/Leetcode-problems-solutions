class Solution {
public:
    int orangesRotting(vector<vector<int>>& g) {
        
        int n=g.size();
        int m=g[0].size();
        
        queue<vector<int>> q;
        
        int fresh=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(g[i][j]!=0)
                {
                    fresh++;
                }
                if(g[i][j]==2)
                {
                    q.push({i,j});
                }
            }
        }
        
        int d=0,ans=0,days=0;
        
        int dx[4]={1,-1,0,0};
        int dy[4]={0,0,1,-1};
        while(!q.empty())
        {
            int k=q.size();
            ans+=k;
            
            while(k--)
            {
                auto p=q.front();
                q.pop();
                
                int i=p[0];
                int j=p[1];
                
                for(int l=0;l<4;l++)
                {
                    int x=i+dx[l];
                    int y=j+dy[l];
                    
                    if(x>=0 && x<n && y>=0 && y<m && g[x][y]==1)
                    {
                        // ans++;
                        g[x][y]=2;
                        q.push({x,y});
                    }
                }
            }
            
            if(q.size()!=0)
            days++;
        }
        
        //cout<<ans<<" "<<fresh;
        return ans==fresh ? days : -1 ;
    }
};