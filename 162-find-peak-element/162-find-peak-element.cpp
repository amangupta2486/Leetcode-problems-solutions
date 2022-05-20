class Solution {
public:
    int findPeakElement(vector<int>& a) {
        
        int n=a.size();
        
        int mi=INT_MIN,j=0;
        
        for(int i=0;i<n;i++)
        {
            if(a[i]>mi)
            {
                mi=a[i];
                j=i;
            }
        }
        
        return j;
    }
};