class Solution {
public:
    
    int dp[105];
    
    int solve(int i,int n,vector<int> &a)
    {
        if(i>=n)
        {
            return 0;
        }
        
         
        if(dp[i]!=-1)
        {
            return dp[i];
        }
        
        int rob=a[i]+solve(i+2,n,a);
        int not_rob=solve(i+1,n,a);
       
        
        return dp[i]=max(rob,not_rob);
    }
    int rob(vector<int>& a) {
        
        int n=a.size();
        
        memset(dp,-1,sizeof(dp));
        
        return solve(0,n,a);
    }
};