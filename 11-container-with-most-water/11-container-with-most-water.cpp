class Solution {
public:
    int maxArea(vector<int>& a) {
        
        int n=a.size();
        
        int i=0,j=n-1;
        int area=0;
        
        while(i<j)
        {
            if(a[i]<=a[j])
            {
                area=max(area,a[i]*(j-i));
                i++;
            }
            else
            {
                area=max(area,a[j]*(j-i));
                j--;
            }
        }
        
        return area;
    }
};