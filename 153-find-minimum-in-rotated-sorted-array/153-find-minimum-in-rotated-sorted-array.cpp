class Solution {
public:
    int findMin(vector<int>& a) {
        
        int n=a.size();
        
        int i=0,j=n-1;
        
        if(n==2)
        {
            if(a[0]>=a[1])
            {
                return 1;
            }
        }
        
        if(a[i]<=a[j])
        {
            return a[0];
        }
        
        while(i<=j)
        {
            int m=(i+j)/2;
            
            if(a[m]<=a[(m+1)%n] && a[m]<=a[((m-1)+n)%n])
            {
                return a[m];
            }
            
            if(a[m]>=a[0])
            {
                i=m+1;
            }
            
            else if(a[m]<=a[n-1])
            {
                j=m-1;
            }
        }
        
        return 0;
    }
};