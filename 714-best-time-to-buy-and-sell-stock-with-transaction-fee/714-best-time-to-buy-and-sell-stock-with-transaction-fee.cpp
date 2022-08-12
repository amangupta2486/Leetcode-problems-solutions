class Solution {
public:
    int dp[50005][2];
    
    int solve(int i,vector<int>& p,int buy,int fee)
    {
        if(i==p.size())
        {
            return 0;
        }
        
        
        if(dp[i][buy]!=-1)
        {
            return dp[i][buy];
        }
        
        int ans=0;
        
        if(buy)
        {
            ans=max(-p[i]+solve(i+1,p,0,fee),solve(i+1,p,1,fee));
        }
        else
        {
            ans=max(p[i]+solve(i+1,p,1,fee)-fee,solve(i+1,p,0,fee));
        }
        
        return dp[i][buy]=ans;
    }
    
    int maxProfit(vector<int>& p,int fee) {
        
        int n=p.size();
        
        memset(dp,-1,sizeof(dp));
        
        return solve(0,p,1,fee);
    }
};