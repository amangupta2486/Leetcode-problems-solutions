class Solution {
public:
    string longestPalindrome(string s) {
        
        int n=s.size();
        
        bool dp[n][n];
        memset(dp,0,sizeof(dp));
        
        for(int i=0;i<n;i++)
        {
            dp[i][i]=1;
        }
        
        int start=0,len=1;
        
        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
            {
                start=i;
                dp[i][i+1]=1;
                len=2;
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
                    start=i;
                    len=max(len,k);
                }
            }
        }
        
        string ans="";
       // cout<<len;
        for(int i=start;i<start+len;i++)
        {
            ans+=s[i];
        }
        
        return ans;
    }
};