class Solution {
public:
    
    int dp[5005][2][2];
    
    int solve(int i, vector<int>& p,int buy,int cool)
    {
        if(i==p.size())
        {
            return 0;
        }
        
        if(dp[i][cool][buy]!=-1)
        {
            return dp[i][cool][buy];
        }
        
        int profit=0;
        
        if(buy && cool)
        {
            profit=max(-p[i]+solve(i+1,p,0,1),solve(i+1,p,1,1));
        }
        
        else if(buy==1 && cool==0)
        {
            profit=solve(i+1,p,1,1);
        }
        else
        {
            profit=max(p[i]+solve(i+1,p,1,0),solve(i+1,p,0,1));
        }
        
        return dp[i][cool][buy]=profit;
    }
    
    int maxProfit(vector<int>& p) {
        
        memset(dp,-1,sizeof(dp));
        
        return solve(0,p,1,1);
    }
};