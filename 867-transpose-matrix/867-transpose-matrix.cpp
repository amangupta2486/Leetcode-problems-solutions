class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& g) {
        
        int n=g.size();
        int m=g[0].size();
        
        vector<vector<int>> ans(m,vector<int>(n,0));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                ans[j][i]=g[i][j];
            }
        }
        
        return ans;
    }
};