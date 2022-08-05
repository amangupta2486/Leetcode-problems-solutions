class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& g, int r, int c) {
        
        int n=g.size();
        int m=g[0].size();
        
        if(n*m!=r*c)
        {
            return g;
        }
        vector<vector<int>> v(r,vector<int>(c,0));
        
        int i=0,j=0,p=0,q=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                
                v[p][q]=g[i][j];
                q++;
                if(q==c)
                {
                    p++;
                    q=0;
                }
                
            }
        }
        
        return v;
    }
};