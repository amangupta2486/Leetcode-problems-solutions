class Solution {
public:
    int searchInsert(vector<int>& a, int t) {
        
        int n=a.size();
        int i=0,j=n-1;
        
        while(i<=j)
        {
            int m=(i+j)/2;
            
            if(a[m]==t)
            {
                return m;
            }
            if(a[m]<t)
            {
                i=m+1;
            }
            else
            {
                j=m-1;
            }
        }
        
        return i;
    }
};