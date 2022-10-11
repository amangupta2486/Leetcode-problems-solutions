class Solution {
public:
    bool increasingTriplet(vector<int>& a) {
        
        int n=a.size();
        
        int c1=INT_MAX,c2=INT_MAX;
        
        for(int i=0;i<n;i++)
        {
            if(a[i]<=c1)
            {
                c1=a[i];
            }
            
            else if(a[i]<=c2)
            {
                c2=a[i];
            }
            
            else
            {
                return 1;
            }
        }
        
        return 0;
    }
};