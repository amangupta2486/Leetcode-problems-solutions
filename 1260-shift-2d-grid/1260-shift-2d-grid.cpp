class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& g, int k) {
        
        int n=g.size();
        int m=g[0].size();
        
        while(k--)
        {
            vector<vector<int>> a(n,vector<int>(m,0));
            
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    if(i==n-1 && j==m-1)
                    a[0][0]=g[i][j];
                    
                    else if(j==m-1)
                    a[i+1][0]=g[i][j];
                    
                    else
                    a[i][j+1]=g[i][j];
                }
            }
            
            g=a;
        }
        
        
        return g;
    }
};