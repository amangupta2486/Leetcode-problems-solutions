class Solution {
public:
    int searchInsert(vector<int>& a, int t) {
        
        int n=a.size();
        
        int j=n;
        
        for(int i=0;i<n;i++)
        {
            if(a[i]==t)
            {
                return i;
            }
            
            if(a[i]>t)
            {
                j=i;
                break;
            }
        }
        
        return j;
    }
};