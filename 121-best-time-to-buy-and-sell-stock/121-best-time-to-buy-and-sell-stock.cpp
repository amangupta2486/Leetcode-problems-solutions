class Solution {
public:
    int maxProfit(vector<int>& p) {
        int n=p.size();
        int mi=p[0],profit=0;
        
        for(int i=1;i<n;i++)
        {
            if(mi>p[i])
            {
                mi=p[i];
            }
            else if(p[i]-mi>profit)
            {
                profit = p[i]-mi;
            }
        }
        
        return profit;
    }
};