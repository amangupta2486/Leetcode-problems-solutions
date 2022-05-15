class Solution {
public:
    int missingNumber(vector<int>& a) {
        
        int n=a.size();
        
        int s=0;
        
        for(int i=0;i<n;i++)
        {
            s^=a[i];
        }
        
        for(int i=0;i<=n;i++)
        {
            s^=i;
        }
        
        return s;
    }
};