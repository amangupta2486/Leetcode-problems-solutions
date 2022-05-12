class Solution {
public:
    string longestPalindrome(string s) {
        
        int n=s.size();
        
        int dp[n+1][n+1];
        memset(dp,0,sizeof(dp));
        
        for(int i=0;i<n;i++)
        {
            dp[i][i]=1;
        }
        
        int ans=1,start=0,end=0,l=1;
        
        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
            {
                dp[i][i+1]=1;
                start=i;
                ans=2;
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
                    
                    if(k>ans)
                    {
                        ans=k;
                    }
                }
            }
        }
        
        string t="";
        
        for(int i=start;i<start+ans;i++)
        {
            t+=s[i];
        }
        
        return t;
    }
};