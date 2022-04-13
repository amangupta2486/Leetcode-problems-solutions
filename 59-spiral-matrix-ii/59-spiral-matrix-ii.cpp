class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        int a=0,b=n-1,c=0,d=n-1;
        
        vector<int> v;
        vector<vector<int>> g(n,vector<int>(n,0));
        
        int ans=1;
        
        while(a<=b && c<=d)
        {
           for(int j=c;j<=d;j++)
           {
               g[a][j]=ans++;
           }
           
           for(int i=a+1;i<b;i++)
           {
               g[i][d]=ans++;
           }
           
            if(a!=b)
           {     
               for(int j=d;j>=c;j--)
               {
                   g[b][j]=ans++;
               }
           }
            
            if(c!=d)
            {    
                for(int i=b-1;i>a;i--)
                {
                    g[i][c]=ans++;
                }
            }
           a++;
           c++; 
           b--;
           d--;
        }
        
        return g;
    }
};