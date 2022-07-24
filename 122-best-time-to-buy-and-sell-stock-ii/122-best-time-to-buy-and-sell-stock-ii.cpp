class Solution {
public:
    
    int dp[30005][2];
    
    int solve(int i,int n,vector<int>& p,int buy)
    {
        if(i==n)
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
            ans=max(-p[i]+solve(i+1,n,p,0),solve(i+1,n,p,1));
        }
        else
        {
            ans=max(p[i]+solve(i+1,n,p,1),solve(i+1,n,p,0));
        }
        
        return dp[i][buy]=ans;
    }
    
    int maxProfit(vector<int>& p) {
        
        int n=p.size();
        
        memset(dp,-1,sizeof(dp));
        
        return solve(0,n,p,1);
    }
};