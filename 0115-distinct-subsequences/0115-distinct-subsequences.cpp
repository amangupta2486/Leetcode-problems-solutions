class Solution {
public:
    int n,m;
    int dp[1005][1005];
    
    int solve(string &s, string &t,int i,int j)
    {
        if(j==0)
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
        
        int ans=0;
        
        if(s[i-1]==t[j-1])
        {
            ans+= solve(s,t,i-1,j-1);
        }
        
        ans+=solve(s,t,i-1,j);
        
        return dp[i][j]=ans;
    }
    
    int numDistinct(string s, string t) {
        
        n=s.size();
        m=t.size();
        
        memset(dp,-1,sizeof(dp));
        
        return solve(s,t,n,m);
    }
};