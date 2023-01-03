class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
        
        int n=a.size();
        int m=b.size();
        
        vector<int> v;
        int i=0,j=0;
        
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
        
        while(i<n)
        {
            v.push_back(a[i]);
            i++;
        }
        
        while(j<m)
        {
            v.push_back(b[j]);
            j++;
        }
        
        if((n+m)%2)
        {
            return v[(n+m)/2];
        }
        
        n=n+m;
        
        double x=v[n/2]+v[(n/2)-1];
        x=x/2.0;
        
        return x;
    }
};