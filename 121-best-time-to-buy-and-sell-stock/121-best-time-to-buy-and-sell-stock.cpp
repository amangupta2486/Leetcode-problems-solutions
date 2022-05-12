class Solution {
public:
    int maxProfit(vector<int>& p) {
        
        int n=p.size();
        int mi=p[0];
        int ans=0;
        
        for(int i=1;i<n;i++)
        {
            if(mi>p[i])
            {
                mi=p[i];
            }
            
            else if(ans<p[i]-mi)
            {
                ans=p[i]-mi;
            }
        }
        
        return ans;
    }
};