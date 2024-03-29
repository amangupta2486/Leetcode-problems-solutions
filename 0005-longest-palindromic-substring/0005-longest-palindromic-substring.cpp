class Solution {
public:
    string longestPalindrome(string s) {
        
        int n=s.size();
        
        int dp[n][n];
        
        memset(dp,0,sizeof(dp));
        
        for(int i=0;i<n;i++)
        {
            dp[i][i]=1;
        }
        
        int start=0,l=1;
        
        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
            {
                dp[i][i+1]=1;
                start=i;
                l=2;
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
                    
                    if(k>l)
                    {
                        l=k;
                        start=i;
                    }
                }
            }
        }
        
        string ans=s.substr(start,l);
        
        return ans;
    }
};