class Solution {
public:
    int findMin(vector<int>& a) {
        
        int n=a.size();
        int i=0,j=n-1;
        
        if(n<=2)
        {
            return *min_element(a.begin(),a.end());    
        }
        
        while(i<=j)
        {
            int m=(i+j)/2;
            
            if(a[m]<=a[(n+(m-1)%n)%n] && a[m]<=a[(m+1)%n])
            {
                return a[m];
            }
            
            else if(a[m]>a[0])
            {
                i++;
            }
            
            else if(a[m]<a[n-1])
            {
                j--;
            }
        }
        
        return a[0];
    }
};