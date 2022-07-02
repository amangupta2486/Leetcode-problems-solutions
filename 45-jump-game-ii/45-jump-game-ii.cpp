class Solution {
public:
    
    int dp[10005];
    
    int solve(int i,vector<int>& a,int n)
    {
        if(i>=n-1)
        {
            return 0;
        }
        
        if(dp[i]!=-1)
        {
            return dp[i];
        }
        int ans=10000;
        
        for(int j=1;j<=a[i];j++)
        {
            ans=min(ans,1+solve(i+j,a,n));
        }
        
        return dp[i]=ans;
    }
    int jump(vector<int>& a) {
        
        int n=a.size();
        memset(dp,-1,sizeof(dp));
        
        return solve(0,a,n);
    }
};