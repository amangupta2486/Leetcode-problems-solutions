// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > g, int r, int c) 
    {
        // code here 
        
         int n1=0,n2=r-1;
         int m1=0,m2=c-1;
         
         vector<int> v;
         
         while(n1<=n2 && m1<=m2)
         {
            for(int i=m1;i<=m2;i++)
            {
                v.push_back(g[n1][i]);
            }
            
            
            for(int i=n1+1;i<n2;i++)
            {
                v.push_back(g[i][m2]);
            }
            
            if(n2!=n1)
            {
                for(int i=m2;i>=m1;i--)
                {
                    v.push_back(g[n2][i]);
                }
            }
            
            if(m2!=m1)
            {
                for(int i=n2-1;i>=n1+1;i--)
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

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends