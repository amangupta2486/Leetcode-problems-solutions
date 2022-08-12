class Solution {
public:
    int dp[100005][2][3];
    
    int solve(int i,vector<int>& p,int buy,int k)
    {
        if(i==p.size() || k==0)
        {
            return 0;
        }
        
        
        if(dp[i][buy][k]!=-1)
        {
            return dp[i][buy][k];
        }
        
        int ans=0;
        
        if(buy)
        {
            ans=max(-p[i]+solve(i+1,p,0,k),solve(i+1,p,1,k));
        }
        else
        {
            ans=max(p[i]+solve(i+1,p,1,k-1),solve(i+1,p,0,k));
        }
        
        return dp[i][buy][k]=ans;
    }
    
    int maxProfit(vector<int>& p) {
        
        int n=p.size();
        
        memset(dp,-1,sizeof(dp));
        
        return solve(0,p,1,2);
    }
};