class Solution {
public:
    long long mostPoints(vector<vector<int>>& a) {
        
        long int n=a.size();
        
        vector<long long> dp(n+1,0);
        
        //dp[n-1]=a[n-1][0];
        
        for(int i=n-1;i>=0;i--)
        {
            long int idx=i+a[i][1]+1;
            
            if(idx<n)
            {
                dp[i]=max(dp[i+1],dp[idx]+a[i][0]);
            }
            else
            {
                dp[i]=max(dp[i+1],1ll*a[i][0]);
            }
        }
        
        long long mx=0;
        
        for(int i=0;i<n;i++)
        {
            //cout<<dp[i]<<" ";
            mx=max(mx,dp[i]);
        }
        
        //cout<<endl;
        
        return mx;
    }
};