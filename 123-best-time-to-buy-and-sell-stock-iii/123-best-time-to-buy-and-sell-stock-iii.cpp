class Solution {
public:
    
    int dp[100005][3][2];
    
    int solve(int i,int n,vector<int>& p,int k,int buy)
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
            ans=max(-p[i]+solve(i+1,n,p,k,0),solve(i+1,n,p,k,1));
        }
        else
        {
            ans=max(p[i]+solve(i+1,n,p,k-1,1),solve(i+1,n,p,k,0));
        }
        
        return dp[i][k][buy]=ans;
    }
    
    int maxProfit(vector<int>& p) {
        
        int n=p.size();
        
        memset(dp,-1,sizeof(dp));
        
        return solve(0,n,p,2,1);
    }
};