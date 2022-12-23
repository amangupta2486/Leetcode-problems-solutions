class Solution {
public:
    
    int dp[5005][2][2];
    
    int solve(vector<int>& p,int i,int n,int buy,int cool)
    {
        if(i==n)
        {
            return 0;
        }
        
        if(dp[i][buy][cool]!=-1)
        {
            return dp[i][buy][cool];
        }
        
        int ans=0;
        
        if(buy && cool)
        {
            ans=max(-p[i]+solve(p,i+1,n,0,cool),solve(p,i+1,n,1,cool));
        }
        
        if(cool==0)
        {
            ans=solve(p,i+1,n,1,1);
        }
        
        else if(buy==0)
        {
            ans=max(p[i]+solve(p,i+1,n,1,0),solve(p,i+1,n,0,cool));
        }
        
        return dp[i][buy][cool]=ans;
    }
    int maxProfit(vector<int>& p) {
        
        int n=p.size();
        
        memset(dp,-1,sizeof(dp));
        
        return solve(p,0,n,1,1);
    }
};