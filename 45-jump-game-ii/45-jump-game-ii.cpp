class Solution {
public:
    
    int dp[10005];
    
    int solve(int i,int n,vector<int>& a)
    {
        if(i>=n-1)
        {
            return 0;
        }
        
        if(dp[i]!=-1)
        {
            return dp[i];
        }
        
        int ans=INT_MAX;
        
        if(a[i]==0)
        {
            return 10000;
        }
        
        for(int j=1;j<=a[i];j++)
        {
            ans=min(ans,solve(i+j,n,a));
        }
        
        return dp[i]=1+ans;
    }
    
    int jump(vector<int>& a) {
        
        int n=a.size();
        
        memset(dp,-1,sizeof(dp));
        
        return solve(0,n,a);
    }
};