class Solution {
public:
    
    vector<int> v;
    
    int dx[8]={1,1,1,-1,-1,-1,0,0};
    int dy[8]={-1,0,1,-1,0,1,-1,1};
    
    
    bool check(int i,int j,vector<vector<int>>& g,vector<vector<int>>& vis,int n,int m)
    {
        for(int k=0;k<8;k++)
        {
            int x = i + dx[k];
            int y = j + dy[k];
            
            //cout<<x<<" "<<y<<endl;
            if(x>=0 && x<n && y>=0 && y<m && !vis[x][y] && g[x][y]==0)
            {
               return false;
            }
        }
        return true;
    }
    void solve(vector<vector<int>>& g,vector<vector<int>>& vis,int i,int j,int n,int m,int s)
    {
        
         if(i==n-1 && j==m-1)
         {   
            v.push_back(s);
            return;
         }
        
        if(i==n-1 || j==m-1)
        {
            if(check(i,j,g,vis,n,m))
            return;
        }
        
        for(int k=0;k<8;k++)
        {
            int x = i + dx[k];
            int y = j + dy[k];
            
            //cout<<x<<" "<<y<<endl;
            if(x>=0 && x<n && y>=0 && y<m && !vis[x][y] && g[x][y]==0)
            {
                vis[x][y]=1;
                solve(g,vis,x,y,n,m,s+1);
                vis[x][y]=0;
            }
        }
    }
    
    int shortestPathBinaryMatrix(vector<vector<int>>& g) {
        
        int n=g.size();
        int m=g[0].size();
        
        vector<vector<int>> vis(n,vector<int>(m,0));
        
        if(g[0][0]==1)
            return -1;
        //solve(g,vis,0,0,n,m,1);
        
        
        queue<vector<int>> q;
        
        q.push({0,0,1});
        
        while(!q.empty())
        {
//             int k=q.size();
            
//             while(k--)
//             {
                auto p=q.front();
                q.pop();
                
                int i=p[0];
                int j=p[1];
                int s=p[2];
                
                if(i==n-1 && j==m-1)
                {
                    v.push_back(s);
                    continue;
                }
                
                for(int k=0;k<8;k++)
                {
                    int x = i + dx[k];
                    int y = j + dy[k];

                    //cout<<x<<" "<<y<<endl;
                    if(x>=0 && x<n && y>=0 && y<m && !vis[x][y] && g[x][y]==0)
                    {
                        vis[x][y]=1;
                        q.push({x,y,s+1});
                        //vis[x][y]=0;
                    }
                }
           // }
        }
        int ans=INT_MAX;
            
        for(auto i:v)
        {
            //cout<<i<<" ";
            if(i<ans)
            {
                ans=i;
            }
        }
        
        return ans==INT_MAX ? -1 :ans;
    }
};