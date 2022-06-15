class Solution {
public:
    int maxArea(vector<int>& a) {
        
        int n=a.size();
        int l=0,r=n-1;
        int ans=0;
        
        while(l<r)
        {
            if(a[l]<=a[r])
            {
                ans=max(ans,a[l]*(r-l));
                l++;
            }
            else
            {
                ans=max(ans,a[r]*(r-l));
                r--;
            }
        }
        
        return ans;
    }
};