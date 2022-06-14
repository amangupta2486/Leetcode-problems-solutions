class Solution {
public:
    
    int dp[1005][1005];
    
    int solve(string &s1, string &s2,int n,int m)
    {
        if(n==0)
        {
            int s=0;
            for(int i=0;i<m;i++)
            {
                s+=(int)s2[i];
            }
            return s;
        }
        if(m==0)
        {
            int s=0;
            for(int i=0;i<n;i++)
            {
                s+=(int)s1[i];
            }
            return s;
        }
        
        if(dp[n][m]!=-1)
        {
            return dp[n][m];
        }

        if(s1[n-1]==s2[m-1])
        {
            return dp[n][m]=solve(s1,s2,n-1,m-1);
        }
        
        return dp[n][m]=min({(int)s1[n-1]+solve(s1,s2,n-1,m),(int)s2[m-1]+solve(s1,s2,n,m-1)});
    }
    int minimumDeleteSum(string s1, string s2) {
        
        int n=s1.size();
        int m=s2.size();
        memset(dp,-1,sizeof(dp));
        
        return solve(s1,s2,n,m);
    }
};