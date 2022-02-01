class Solution {
public:
    int maxProfit(vector<int>& p) {
        
        int n=p.size();
        
        int m=INT_MAX,ans=0;
        
        for(int i=0;i<n;i++)
        {
            if(p[i]<m)
            {
                m=p[i];
            }
            
            else if(p[i]-m>ans)
            {
                ans=p[i]-m;
            }
        }
        
        return ans;
    }
};