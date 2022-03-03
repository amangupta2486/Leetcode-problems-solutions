class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& a) {
        
        int n=a.size();
        
        long c=0;
        
        for(int i=0;i<n-1;i++)
        {
            int d=a[i+1]-a[i];
            
            for(int j=i+1;j<n-1;j++)
            {
                if(a[j+1]-a[j]==d)
                {
                    c++;
                }
                else
                {
                    break;
                }
            }
        }
        
        return c;
    }
};