class Solution {
public:
    vector<int> sortedSquares(vector<int>& a) {
        
        int n=a.size();
        for(int i=0;i<n;i++)
        {
            a[i]=abs(a[i]);
        }
        
        vector<int> v(n);
        int m=n-1;
        int l=0,r=n-1;
        
        while(l<=r)
        {
            if(a[l]>=a[r])
            {
                v[m]=a[l]*a[l];
                l++;
            }
            else
            {
                v[m]=a[r]*a[r];
                r--;
            }
            m--;
        }
        
        return v;
    }
};