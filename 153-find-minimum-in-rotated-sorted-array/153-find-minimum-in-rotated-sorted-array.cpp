class Solution {
public:
    int findMin(vector<int>& a) {
        
        int n=a.size();
        
        int i=0,j=n-1;
        
        if(a[0]<=a[n-1])
        {
            return a[0];
        }
        
        while(i<=j)
        {
            int m=(i+j)/2;
            
            if(a[m]<=a[(n+m-1)%n] && a[m]<=a[(m+1)%n])
            {
                return a[m];
            }
            
            if(a[m]>=a[0])
            {
                i=m+1;
            }
            else
            {
                j=m-1;
            }
        }
        
        return 0;
    }
};