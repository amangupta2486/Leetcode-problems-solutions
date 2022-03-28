class Solution {
public:
    int search(vector<int>& a, int t) {
        
        int n=a.size();
        
        int l=0,h=n-1;
        
        while(l<=h)
        {
            int m=(l+h)/2;
            
            if(a[m]==t)
            {
                return m;
            }
            
            if(a[m]>=a[l])
            {
                if(t>=a[l] && t<=a[m])
                {
                   h=m-1;
                }
                else
                {
                    l=m+1;
                }
            }
            
            else
            {
                if(t<=a[h] && t>=a[m])
                {
                    l=m+1;
                }
                else
                {
                    h=m-1;
                }
            }
        }
        
        return -1;
    }
};