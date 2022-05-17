class Solution {
public:
    int findUnsortedSubarray(vector<int>& a) {
        
        int n=a.size();
        
        vector<int> b=a;
        
        sort(a.begin(),a.end());
        
        int i=0,j=0;
        
        for(int k=0;k<n;k++)
        {
            if(a[k]!=b[k])
            {
                i=k;
                break;
            }
        }
        
        for(int k=n-1;k>=0;k--)
        {
            if(a[k]!=b[k])
            {
                j=k;
                break;
            }
        }
        
        if(i==j)
        {
            return 0;
        }
        return j-i+1;
    }
};