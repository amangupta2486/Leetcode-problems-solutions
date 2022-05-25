class Solution {
public:
    int findPeakElement(vector<int>& a) {
        
        int n=a.size();
        
        if(n==1)
        {
            return 0;
        }
        //int mi=INT_MIN,j=0;
        
        if(a[0]>a[1])
        {
            return 0;
        }
          
        for(int i=1;i<n-1;i++)
        {
            if(a[i]>a[i-1] && a[i]>a[i+1])
            {
                return i;
            }
        }
        
         if(a[n-2]<a[n-1])
        {
            return n-1;
        }
        
        
        return -1;
    }
};