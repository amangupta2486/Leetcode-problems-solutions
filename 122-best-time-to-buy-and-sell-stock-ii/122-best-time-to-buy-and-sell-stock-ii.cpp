class Solution {
public:
    int maxProfit(vector<int>& p) {
        
        int ans=0;
        int n=p.size();
        
        for(int i=0;i<n-1;i++)
        {
            if(p[i+1]>p[i])
            ans+=p[i+1]-p[i];
        }
        
        return ans;
    }
};