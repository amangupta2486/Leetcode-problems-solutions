class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        int n1=0,n2=n-1,m1=0,m2=n-1;
        
        vector<vector<int>> v(n,vector<int>(n,0));
        int x=1;
        
        while(n1<=n2 && m1<=m2)
        {
            for(int j=m1;j<=m2;j++)
            {
                v[n1][j]=x;
                x++;
            }
            
            for(int i=n1+1;i<n2;i++)
            {
                v[i][m2]=x;
                x++;
            }
            
            if(n1!=n2)
            {
                for(int j=m2;j>=m1;j--)
                {
                    v[n2][j]=x;
                    x++;
                }
            }
            
            if(m1!=m2)
            {
                for(int i=n2-1;i>n1;i--)
                {
                    v[i][m1]=x;
                    x++;
                }
            }
            
            n1++;
            m1++;
            n2--;
            m2--;
        }
        
        return v;
    }
};