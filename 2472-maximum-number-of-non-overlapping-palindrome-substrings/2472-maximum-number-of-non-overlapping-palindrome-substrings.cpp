class Solution {
public:
    int maxPalindromes(string s, int k) {
        
        int n=s.size();
        
        int dp[n][n];
        
        memset(dp,0,sizeof(dp));
        
        for(int i=0;i<n;i++)
        {
            dp[i][i]=1;
        }
        
        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
            dp[i][i+1]=1;
        }
        
        for(int k=3;k<=n;k++)
        {
            for(int i=0;i<n-k+1;i++)
            {
                int j=i+k-1;
                
                if(s[i]==s[j] && dp[i+1][j-1])
                {
                    dp[i][j]=1;
                }
            }
        }
        
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<n;j++)
        //     {
        //         cout<<dp[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        
        int ans=0;
        
        for(int l=0;l<n;l++)
        {
            int cnt=0;
            int i=l;
            
            while(i<n-k+1)
            {
                int j=i+k-1;
                if(j<n && dp[i][j])
                {
                    cnt++;
                    i+=k;
                }
                else if(j+1<n && dp[i][j+1])
                {
                    cnt++;
                    i+=k+1;
                }
                else
                    i++;
            }
            
            ans=max(ans,cnt);
        }
        
        return ans;
    }
};