class Solution {
public:
    int nearestExit(vector<vector<char>>& g, vector<int>& ent) {
        
        int n=g.size();
        int m=g[0].size();
        
        queue<vector<int>> q;
        
        q.push({ent[0],ent[1],0});
        
        g[ent[0]][ent[1]]='1';
        
        int dx[4]={1,-1,0,0};
        int dy[4]={0,0,1,-1};
        
        int f=0;
        int ans=-1;
        
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
                
                if(c!=0 && (i==0 || i==n-1 || j==0 || j==m-1))
                {
                    ans=c;
                    f=1;
                    break;
                }
                
                for(int k=0;k<4;k++)
                {
                    int x=i+dx[k];
                    int y=j+dy[k];
                    
                    if(x>=0 && x<n && y>=0 && y<m && g[x][y]=='.')
                    {
                        g[x][y]='1';
                        
                        q.push({x,y,c+1});
                    }
                }
            }
            
            if(f==1)
            {
                break;
            }
        }
        
        return ans;
    }
};