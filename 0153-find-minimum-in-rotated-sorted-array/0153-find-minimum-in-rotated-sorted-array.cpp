class Solution {
public:
    int findMin(vector<int>& a) {
        
        int n=a.size();
        
        if(n<3)
        {
            int mi=INT_MAX;
            
            for(auto x:a)
            {
                mi=min(mi,x);
            }
            
            return mi;
        }
        
        int i=0,j=n-1;
        
        while(i<=j)
        {
            int m=(i+j)/2;
            
            if(a[(m+1)%n]>a[m] && a[((m-1)+n)%n]>a[m])
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
        
        return a[0];
    }
};