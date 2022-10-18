class Solution {
public:
    
    int dp[1005][1005];
    
    
    int solve(string &s, string &t,int i,int j)
    {
        if(j<0)
        {
            return 1;
        }
        
        if(i<j)
        {
            return 0;
        }
        
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        
        if(s[i]==t[j])
        {
            return dp[i][j]=solve(s,t,i-1,j-1)+solve(s,t,i-1,j);
        }
        
        return dp[i][j]=solve(s,t,i-1,j);
    }
    
    int numDistinct(string s, string t) {
        
        int n=s.size();
        int m=t.size();
        
        memset(dp,-1,sizeof(dp));
        
        return solve(s,t,n-1,m-1);
    }
};