class Solution {
public:
    
    int dp[100005][3][2];
    
    int solve(int i,int k, vector<int>& p,int buy)
    {
        if(i==p.size() || k==0)
        {
            return 0;
        }
        
        if(dp[i][k][buy]!=-1)
        {
            return dp[i][k][buy];
        }
        
        int profit=0;
        
        if(buy)
        {
            profit=max(-p[i]+solve(i+1,k,p,0),solve(i+1,k,p,1));
        }
        else
        {
            profit=max(p[i]+solve(i+1,k-1,p,1),solve(i+1,k,p,0));
        }
        
        return dp[i][k][buy]=profit;
    }
    
    int maxProfit(vector<int>& p) {
        
        memset(dp,-1,sizeof(dp));
        
        return solve(0,2,p,1);
    }
};