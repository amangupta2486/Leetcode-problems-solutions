class Solution {
public:
    void rotate(vector<vector<int>>& g) {
        
        int n=g.size();
        int m=g[0].size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<m;j++)
            {
                swap(g[i][j],g[j][i]);
            }
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m/2;j++)
            {
                swap(g[i][j],g[i][n-j-1]);
            }
        }
        
    }
};