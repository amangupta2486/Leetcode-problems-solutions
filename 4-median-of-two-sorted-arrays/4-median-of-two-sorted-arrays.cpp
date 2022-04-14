class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
        
        int n=a.size(),m=b.size();
        
        int x=(n+m)/2;
        
        int i=0,j=0,d=0;
        
        vector<int> v;
        
        while(i<n && j<m)
        {
            if(a[i]<=b[j])
            {
                v.push_back(a[i]);
                i++;
            }
            else
            {
                v.push_back(b[j]);
                j++;
            }
        }
        
         while(i<n )
        {

            v.push_back(a[i]);
            i++;
           
        }
        
         while(j<m)
         {
            v.push_back(b[j]);
            j++;

        }
        
        double q;
        if((n+m )%2 ==0)
        {
//             for(int i=0;i<n+m;i++)
//             cout<<v[i]<<" ";
            
//             cout<<endl;
            q = double(v[x-1]+v[x])/2.0;
        }
        
        else
        q=v[x];
        
        return q;
    }
};


// Input
// [0,0,0,0,0]
// [-1,0,0,0,0,0,1]
// Output
// -0.50000
// Expected
// 0.00000