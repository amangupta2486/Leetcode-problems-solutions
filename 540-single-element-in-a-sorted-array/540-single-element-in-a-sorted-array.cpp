class Solution {
public:
    int singleNonDuplicate(vector<int>& a) {
        
        int n=a.size();
        
        for(int i=0;i<n-1;i+=2)
        {
            if(a[i]!=a[i+1])
            {
                return a[i];
            }
        }
        
        return a[n-1];
    }
};