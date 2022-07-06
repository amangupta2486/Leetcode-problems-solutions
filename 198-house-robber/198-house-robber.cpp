class Solution {
public:
    
    int dp[105];
    
    int solve(int i,int n,vector<int>& a)
    {
        if(i<0)
        {
            return 0;
        }
        
        if(dp[i]!=-1)
        {
            return dp[i];
        }
        
        return dp[i]=max(a[i]+solve(i-2,n,a),solve(i-1,n,a));
    }
    int rob(vector<int>& a) {
        
        int n=a.size();
        memset(dp,-1,sizeof(dp));
        
        return solve(n-1,n,a);
    }
};