class Solution {
public:
    
    int dp[1005];
    int n;
    
    int solve(vector<int>& a, int t)
    {

        if(t==0)    
        {
            return 1;
        }
        
        if(dp[t]!=-1)
        {
            return dp[t];
        }
        
        int ans=0;
        
        for(int i=0;i<n;i++)
        {
            if(a[i]<=t)
            {
                ans+= solve(a,t-a[i]);
            }
        }
        
        return dp[t]=ans;
    }
    int combinationSum4(vector<int>& a, int t) {
        
        n=a.size();
        
        memset(dp,-1,sizeof(dp));
        
        return solve(a,t);
    }
};