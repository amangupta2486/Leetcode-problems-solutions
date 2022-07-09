class Solution {
public:
    int dp[1005][105][2];
    
    int solve(int i,int buy,int n,vector<int>& p,int k)
    {
        if(i>=n || k==0)
        {
            return 0;
        }
        
        if(dp[i][k][buy]!=-1)
        {
            return dp[i][k][buy];
        }
        
        int ans=0;
        
        if(buy)
        {
            ans=max(-p[i]+solve(i+1,0,n,p,k),solve(i+1,1,n,p,k));
        }
        else
        {
            ans=max(p[i]+solve(i+1,1,n,p,k-1),solve(i+1,0,n,p,k));
        }
        
        return dp[i][k][buy]=ans;
    }
    
    int maxProfit(int k, vector<int>& p) {
        
        int n=p.size();
        
        memset(dp,-1,sizeof(dp));
        
        return solve(0,1,n,p,k);
    }
};