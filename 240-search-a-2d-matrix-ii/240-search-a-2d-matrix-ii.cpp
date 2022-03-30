class Solution {
public:
    bool searchMatrix(vector<vector<int>>& g, int t) {
        
        int n=g.size();
        int m=g[0].size();
        
        int i=0,j=m-1;
        
        while(i<n && j>=0)
        {
            if(g[i][j]==t)
            {
                return 1;
            }
            
            if(g[i][j]<t)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        
        return 0;
        
    }
};