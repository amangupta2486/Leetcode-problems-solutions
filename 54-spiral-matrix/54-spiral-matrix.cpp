class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& g) {
        
        int n=g.size();
        int m=g[0].size();
        
        int a=0,b=n-1,c=0,d=m-1;
        
        vector<int> v;
        
        while(a<=b && c<=d)
        {
           for(int j=c;j<=d;j++)
           {
               v.push_back(g[a][j]);
           }
           
           for(int i=a+1;i<b;i++)
           {
               v.push_back(g[i][d]);
           }
           
            if(a!=b)
           {     
               for(int j=d;j>=c;j--)
               {
                   v.push_back(g[b][j]);
               }
           }
            
            if(c!=d)
            {    
                for(int i=b-1;i>a;i--)
                {
                    v.push_back(g[i][c]);
                }
            }
           a++;
           c++; 
           b--;
           d--;
        }
        
        return v;
    }
};