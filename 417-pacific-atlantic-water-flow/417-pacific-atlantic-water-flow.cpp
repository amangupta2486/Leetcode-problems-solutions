class Solution {
public:
    
    void dfs(vector<vector<int>>& h,int i,int j,int prev,vector<vector<bool>> &q)
    {
        if(i<0 || j<0 || i>=h.size() || j>=h[0].size() || h[i][j]<prev || q[i][j]==1)
        {
            return ;
        }
        
        q[i][j]=1;
        
        dfs(h,i+1,j,h[i][j],q);
        dfs(h,i,j+1,h[i][j],q);
        dfs(h,i-1,j,h[i][j],q);
        dfs(h,i,j-1,h[i][j],q);
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& h) {
        
        int n=h.size();
        int m=h[0].size();
        
        vector<vector<int>> ans;
            
        vector<vector<bool>> p(n,vector<bool>(m,0));
        vector<vector<bool>> a(n,vector<bool>(m,0));
        
        for(int i=0;i<n;i++)
        {
            dfs(h,i,0,0,p);
            dfs(h,i,m-1,0,a);
        }
        
        for(int i=0;i<m;i++)
        {
            dfs(h,0,i,0,p);
            dfs(h,n-1,i,0,a);
        }
        
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(p[i][j]&& a[i][j])
                {
                    ans.push_back({i,j});
                }
            }
        }
        
        return ans;
    }
};