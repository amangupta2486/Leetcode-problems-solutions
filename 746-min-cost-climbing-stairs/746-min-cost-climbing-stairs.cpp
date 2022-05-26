class Solution {
public:
    
    int dp[1005];
    
    int solve(vector<int>& a,int i)
    {
        if(i==0)
        {
            return a[0];
        }
        
        if(i==1)
        {
            return a[1];
        }
        
        if(i<0)
        {
            return 0;
        }
        
        if(dp[i]!=-1)
        {
            return dp[i];
        }
        
        int r=INT_MAX;
        
        int l=a[i]+solve(a,i-1);
        
        if(i-2>=0)
        r=a[i]+solve(a,i-2);
        
        return dp[i]=min(l,r);
    }
    int minCostClimbingStairs(vector<int>& c) {
        
        int n=c.size();
        memset(dp,-1,sizeof(dp));
        
        return min({solve(c,n-1),solve(c,n-2)});
    }
};