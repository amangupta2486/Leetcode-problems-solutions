class Solution {
public:
    
    int dp[1005][1005];
    
    int solve(string &a, string &b,int n,int m)
    {
        if(n==0 || m==a.size())
        {
            return 0;
        }
        
        if(dp[n][m]!=-1)
        {
            return dp[n][m];
        }
        if(a[n-1]==b[m])
        {
            return dp[n][m]=1+solve(a,b,n-1,m+1);
        }
        
        return dp[n][m]=max(solve(a,b,n-1,m),solve(a,b,n,m+1));
    }
    
    int longestPalindromeSubseq(string s) {
        int n=s.size();
        memset(dp,-1,sizeof(dp));
        return solve(s,s,n,0);
    }
};