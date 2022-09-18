class Solution {
public:
    int trap(vector<int>& a) {
        
        int n=a.size();
        
        int lmax=0,rmax=0,i=0,j=n-1;
        
        int ans=0;
        
        while(i<=j)
        {
            if(a[i]<=a[j])
            {
                if(a[i]>lmax)
                {
                    lmax=a[i];
                }
                else
                {
                    ans+=lmax-a[i];
                }
                i++;
            }
            else
            {
                if(a[j]>rmax)
                {
                    rmax=a[j];
                }
                else
                {
                    ans+=rmax-a[j];
                }
                j--;
            }
        }
        
        return ans;
        
    }
};