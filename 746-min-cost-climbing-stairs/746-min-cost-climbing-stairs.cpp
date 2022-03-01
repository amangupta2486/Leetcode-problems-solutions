class Solution {
public:
    
    
    
    int minCostClimbingStairs(vector<int>& a) {
        
        int n=a.size();
        a.push_back(0);
        
        int dp[n+2];
        dp[0]=a[0];
        dp[1]=a[1];
        
        for(int i=2;i<=n;i++)
        {
            int l=a[i]+dp[i-1];
            int r=INT_MAX;
            if(i>1)
            {
                r=a[i]+dp[i-2];
            }
            
            dp[i]=min(l,r);
        }
        
        return min(dp[n],dp[n-1]);
    }
};