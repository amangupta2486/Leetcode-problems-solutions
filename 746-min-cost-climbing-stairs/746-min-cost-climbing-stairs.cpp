class Solution {
public:
    
    int dp[1005];
    
    int solve(int i,vector<int>& a)
    {
      if(i==0 || i==1)
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
        
      return dp[i]=a[i]+min({solve(i-1,a),solve(i-2,a)});
    }
    
    int minCostClimbingStairs(vector<int>& cost) {
        
        int n=cost.size();
        
        memset(dp,-1,sizeof(dp));
        
        return min({solve(n-1,cost),solve(n-2,cost)});
    }
};