class Solution {
public:
    int findMin(vector<int>& a) {
        
        int n=a.size();
        
        if(n==1)
        {
            return a[0];
        }
        
        if(a[0]<=a[n-1])
        {
            return a[0];
        }
        
        int i=0,j=n-1;
        
        while(i<=j)
        {
            int m=(i+j)/2;
            
            if(a[m]<=a[(m-1+n)%n] && a[m]<=a[(m+1)%n])
            {
                return a[m];
            }
            
            if(a[m]>=a[0])
            {
                i++;
            }
            
            else
            {
                j--;
            }
        }
        
        return 0;
    }
};