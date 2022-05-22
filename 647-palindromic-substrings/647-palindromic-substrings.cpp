class Solution {
public:
    int countSubstrings(string s) {
        
        int n=s.size();
        
        int dp[n+1][n+1];
        memset(dp,0,sizeof(dp));
        
        for(int i=0;i<n;i++)
        {
            dp[i][i]=1;
        }
        
        int ans=1,start=0;
        
        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
            {
                ans=2;
                start=i;
                dp[i][i+1]=1;
            }
        }
        
        for(int k=3;k<=n;k++)
        {
            for(int i=0;i<n-k+1;i++)
            {
                int j=i+k-1;
                
                if(s[i]==s[j] && dp[i+1][j-1])
                {
                    dp[i][j]=1;
                    if(ans<k)
                    {
                        ans=k;
                        start=i;
                    }
                }
            }
        }
        
        int cnt=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(dp[i][j]==1)
                {
                    cnt++;
                }
            }
        }
        
        return cnt;
    }
};