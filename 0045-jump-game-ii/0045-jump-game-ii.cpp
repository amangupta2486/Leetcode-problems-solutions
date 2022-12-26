class Solution {
public:
    
    int n;
    int dp[10005];
    
    int solve(int i,vector<int> &a)
    {
        if(i>=n-1)
        {
            return 0;
        }
        
        if(dp[i]!=-1)
        {
            return dp[i];
        }
        
        int ans=n;
        
        for(int j=i;j<a[i]+i && j<n;j++)
        {
            ans=min(ans,1+solve(j+1,a));
        }
        
        return dp[i]=ans;
    }
    
    int jump(vector<int>& a) {
        
        n=a.size();
        memset(dp,-1,sizeof(dp));
        return solve(0,a);
    }
};