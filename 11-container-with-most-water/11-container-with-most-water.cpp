class Solution {
public:
    int maxArea(vector<int>& h) {
        
        int n=h.size();
        int ans=0,i=0,j=n-1;

        while(i<j)
        {
            if(h[i]<=h[j])
            {
                ans=max(ans,h[i]*(j-i));
                i++;
            }
            else
            {
                ans=max(ans,h[j]*(j-i));
                j--;
            }
        }
        
        return ans;
    }
};