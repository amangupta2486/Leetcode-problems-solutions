class Solution {
public:
    int findDuplicate(vector<int>& a) {
        
        int n=a.size();
        
        for(int i=0;i<n;i++)
        {
            if(a[abs(a[i])-1]>0)
            {
                a[abs(a[i])-1]=-1*a[abs(a[i])-1];
            }
            else
            {
                return abs(a[i]);
            }
        }
        
        return 0;
    }
};