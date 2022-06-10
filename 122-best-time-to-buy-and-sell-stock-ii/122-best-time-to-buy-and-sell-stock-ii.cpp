class Solution {
public:
    
    int dp[30005][2];
    
    int solve(int i,vector<int>& p,int buy)
    {
        if(i>=p.size())
        {
            return 0;
        }
        
        if(dp[i][buy]!=-1)
        {
            return dp[i][buy];
        }
        int profit=0;
        
        if(buy)
        {
            profit=max(-1*p[i]+solve(i+1,p,0),solve(i+1,p,1));
        }
        else
        {
            profit=max(p[i]+solve(i+1,p,1),solve(i+1,p,0));
        }
        
        return dp[i][buy]=profit;
    }
    
    int maxProfit(vector<int>& p) {
        
        int n=p.size();
        memset(dp,-1,sizeof(dp));
        
        return solve(0,p,1);
    }
};