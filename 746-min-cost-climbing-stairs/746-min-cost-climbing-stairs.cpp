class Solution {
public:
    
    int dp[1005];
    
    int solve(int i,int n,vector<int>& a)
    {
        if(i<0)
        {
            return 0;
        }
        
        if(i==0 || i==1)
        {
            return a[i];
        }
        
        if(dp[i]!=-1)
        {
            return dp[i];
        }
        
        int l=a[i]+solve(i-1,n,a);
        int r=1000000;
        
        if(i>1)
        {
            r=a[i]+solve(i-2,n,a);
        }
        
        return dp[i]=min(l,r);
    }
    
    int minCostClimbingStairs(vector<int>& a) {
        
        int n=a.size();
        
        memset(dp,-1,sizeof(dp));
        
        return min(solve(n-1,n,a),solve(n-2,n,a));
    }
};