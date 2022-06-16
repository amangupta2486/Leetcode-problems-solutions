class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& a, int m, int n) {
        
        int p=a.size();
        
        //cout<<p<<" "<<n*m<<endl;
        if(p>n*m || p<n*m)
        {
            vector<vector<int>> b;
            return b;
        }
         vector<vector<int>> v(m,vector<int>(n));
        
        int c=0,j=0;
        
        for(int i=0;i<m;i++)
        {
            while(j<n)
            {
                v[i][j]=a[c];
                c++;
                j++;
            }
            j=0;
        }
        
        return v;
    }
};