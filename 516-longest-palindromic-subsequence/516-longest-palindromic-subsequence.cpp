class Solution {
public:
    
    int dp[1005][1005];
    
    int solve(string &a,int i,int j)
    {
        if(i>j)
        {
            return 0;
        }
        
        if(i==j)
        {
            return 1;
        }
        
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        
        if(a[i]==a[j])
        {
            return 2+solve(a,i+1,j-1);
        }
        
        return dp[i][j]=max({solve(a,i,j-1),solve(a,i+1,j)});
    }
    
    int longestPalindromeSubseq(string s) {
        
        int n=s.size();
        
        memset(dp,-1,sizeof(dp));
        
        return solve(s,0,n-1);
    }
};