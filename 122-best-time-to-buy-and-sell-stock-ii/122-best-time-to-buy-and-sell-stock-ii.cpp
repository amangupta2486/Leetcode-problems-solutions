class Solution {
public:
    
    int dp[30005][2];
    
    int solve(int i,int buy,int n,vector<int>& p)
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
            ans=max(-p[i]+solve(i+1,0,n,p),solve(i+1,1,n,p));
        }
        else
        {
            ans=max(p[i]+solve(i+1,1,n,p),solve(i+1,0,n,p));
        }
        
        return dp[i][buy]=ans;
    }
    
    int maxProfit(vector<int>& p) {
        
        int n=p.size();
        
        memset(dp,-1,sizeof(dp));
        
        return solve(0,1,n,p);
    }
};