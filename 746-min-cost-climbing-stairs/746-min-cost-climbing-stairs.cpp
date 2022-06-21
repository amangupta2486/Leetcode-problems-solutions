class Solution {
public:
    
    int dp[1005];
    
    int solve(int i,int n,vector<int>& cost)
    {
        if(i==0 || i==1)
        {
            return cost[i];
        }
        
        if(dp[i]!=-1)
        {
            return dp[i];
        }
        
        return dp[i]=cost[i]+min(solve(i-1,n,cost),solve(i-2,n,cost));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        
        int n=cost.size();
        memset(dp,-1,sizeof(dp));
        
        return min(solve(n-1,n,cost),solve(n-2,n,cost));
    }
};