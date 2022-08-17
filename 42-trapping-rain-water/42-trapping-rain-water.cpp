class Solution {
public:
    int trap(vector<int>& h) {
        
        int n=h.size();
        
        int lmax=0,rmax=0;
        int i=0,j=n-1;
        
        int ans=0;
        
        while(i<=j)
        {
            if(h[i]<=h[j])
            {
                if(h[i]>lmax)
                {
                    lmax=h[i];
                }
                else
                {
                    ans+=lmax-h[i];
                }
                i++;
            }
            else
            {
                if(h[j]>rmax)
                {
                    rmax=h[j];
                }
                else
                {
                    ans+=rmax-h[j];
                }
                j--;
            }
        }
        
        return ans;
    }
};