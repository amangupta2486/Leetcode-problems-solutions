class Solution {
public:
    
    int dp[5005][2][2];
    
    int solve(int i,int n,int buy,int cool,vector<int>& p)
    {
        if(i>=n)
        {
            return 0;
        }
        
        if(dp[i][cool][buy]!=-1)
        {
            return dp[i][cool][buy];
        }
        int ans=0;
        
        if(buy && cool)
        {
            ans=max(-p[i]+solve(i+1,n,0,cool,p),solve(i+1,n,1,cool,p));
        }
        
        else if(!cool)
        {
            ans=solve(i+1,n,buy,1,p);
        }
        
        else if(!buy && cool)
        {
            ans=max(p[i]+solve(i+1,n,1,0,p),solve(i+1,n,buy,cool,p));
        }
        
        return dp[i][cool][buy]=ans;
    }
    
    int maxProfit(vector<int>& p) {
        
        int n=p.size();
        memset(dp,-1,sizeof(dp));
        
        return solve(0,n,1,1,p);
    }
};