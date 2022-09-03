class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& g) {
        
        int n=g.size();
        int m=g[0].size();
        
        int n1=0,n2=n-1,m1=0,m2=m-1;
        
        vector<int> v;
        
        while(n1<=n2 && m1<=m2)
        {
            for(int j=m1;j<=m2;j++)
            {
                v.push_back(g[n1][j]);
            }
            
            for(int i=n1+1;i<n2;i++)
            {
                v.push_back(g[i][m2]);
            }
            
            if(n1<n2)
            {
                for(int j=m2;j>=m1;j--)
                {
                    v.push_back(g[n2][j]);
                }
            }
            
            if(m1<m2)
            {
                for(int i=n2-1;i>n1;i--)
                {
                    v.push_back(g[i][m1]);
                }
            }
            
            n1++;
            n2--;
            m1++;
            m2--;
        }
        
        return v;
    }
};