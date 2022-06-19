class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& g) {
        
        int n=g.size();
        int m=g[0].size();
        
        int nstart=0,nend=n-1,mstart=0,mend=m-1;
        vector<int> v;
        
        while(nstart<=nend && mstart<=mend)
        {
            for(int j=mstart;j<=mend;j++)
            {
                v.push_back(g[nstart][j]);
            }
            
            for(int i=nstart+1;i<nend;i++)
            {
                v.push_back(g[i][mend]);
            }
            
            if(nstart<nend)
            {
                for(int j=mend;j>=mstart;j--)
                {
                    v.push_back(g[nend][j]);
                }
            }
            
            if(mstart<mend)
            {
                for(int i=nend-1;i>nstart;i--)
                {
                    v.push_back(g[i][mstart]);
                }
            }
            
            nstart++;
            mstart++;
            nend--;
            mend--;
        }
        
        return v;
    }
};