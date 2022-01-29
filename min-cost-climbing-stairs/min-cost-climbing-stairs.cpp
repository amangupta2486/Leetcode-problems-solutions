class Solution {
public:
    
    int solve(vector<int>& a,int i,vector<int> &dp)
    {
        if(i==0)
        {
            return a[i];
        }
        if(i==1)
        {
            return a[i];            
        }
        
        if(i<0)
        {
            return 0;
        }
        
        if(dp[i]!=-1)
        {
            return dp[i];
        }
        
        return dp[i]=a[i]+min(solve(a,i-1,dp),solve(a,i-2,dp));
        //int r = min(solve(a,i-1),solve(a,i-2));
        
    }
   
    int minCostClimbingStairs(vector<int>& a) {
        
        int n=a.size();
        
        vector<int> dp1(n+1,-1),dp2(n+1,-1);
        
        int l=solve(a,n-1,dp1);
        int r=INT_MAX;
        
        if(n>1)
        r=solve(a,n-2,dp2);
        
        return min(l,r);
    }
};