class Solution {
public:
    int trap(vector<int>& h) {
        
        int n=h.size();
        
        int l_max=0,r_max=0;
        int i=0,j=n-1;
        
        int ans=0;
        
        while(i<=j)
        {
            if(h[i]<=h[j])
            {
                if(h[i]>l_max)
                {
                    l_max=h[i];
                }
                else
                {
                    ans+=l_max-h[i];
                }
                i++;
            }
            else
            {
                if(h[j]>r_max)
                {
                    r_max=h[j];
                }
                else
                {
                    ans+=r_max-h[j];
                }
                j--;
            }
        }
        
        return ans;
    }
};