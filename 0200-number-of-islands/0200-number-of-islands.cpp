class Solution {
public:
    
    void solve(int i,int j,vector<vector<char>>& g)
    {
        if(i<0 || j<0 || i>=g.size() || j>=g[0].size() || g[i][j]!='1')
        {
            return;
        }
        
        g[i][j]='2';
        
        solve(i+1,j,g);
        solve(i,j+1,g);
        solve(i-1,j,g);
        solve(i,j-1,g);
    }
    
    int numIslands(vector<vector<char>>& g) {
        
        int n=g.size();
        int m=g[0].size();
        
        int cnt=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(g[i][j]=='1')
                {
                    solve(i,j,g);
                    cnt++;
                }
            }
        }
        
        return cnt;
    }
};