class Solution {
public:
    int maxProfit(vector<int>& a) {
        
        int n=a.size();
        
        int mx=0,mi=a[0];
        
        for(int i=1;i<n;i++)
        {
            if(a[i]<mi)
            {
                mi=a[i];
            }
            
            else if(a[i]-mi>mx)
            {
                mx=a[i]-mi;
            }
        }
        
        return mx;
    }
};