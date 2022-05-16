class Solution {
public:
    
    int ans=INT_MAX;
    // int dx[8]={1,1,-1,-1,0,0 ,1,-1};
    // int dy[8]={0,1, 0,-1,1,-1,1, 1};
    int dx[8]={1,1,1,-1,-1,-1,0,0};
    int dy[8]={0,1,-1,1,-1,0,1,-1};
    /*
    void solve(vector<vector<int>>& g,int i,int j,int n,int m,int c)
    {
        if(i==n-1 && j==m-1)
        {
            ans=min(ans,c);
        }
        
        for(int k=0;k<8;k++)
        {
            int x=i+dx[k];
            int y=j+dy[k];
            
            if(x>=0 && x<n && y>=0 && y<m && !g[x][y])
            {
                g[x][y]=1;
                solve(g,x,y,n,m,c+1);
                g[x][y]=0;
            }
        }
    }
    */
    int shortestPathBinaryMatrix(vector<vector<int>>& g) {
        int n=g.size();
       // int m=g[0].size();
        
//         if(g[0][0]==0)
//         solve(g,0,0,n,m,1);
        
//         else
        if(g[0][0]==1)
            return -1;
        
        queue<vector<int>> q;
        q.push({0,0,1});
        
        int f=0;
        
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
                
                if(i==n-1 && j==n-1)
                {
                    ans=c;
                    f=1;
                    break;
                }
                for(int k=0;k<8;k++)
                {
                    int x=i+dx[k];
                    int y=j+dy[k];

                    if(x>=0 && x<n && y>=0 && y<n && g[x][y]==0)
                    {
                        g[x][y]=1;
                        q.push({x,y,c+1});
                    }
                }
            }
            
            if(f)
            break;
        }
        
        if(ans==INT_MAX)
            return -1;
        
        return ans;
    }
};