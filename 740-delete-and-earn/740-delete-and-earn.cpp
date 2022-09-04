class Solution {
public:
    int deleteAndEarn(vector<int>& a) {
        
        map<int,int> mp;
        
        int n=a.size();
        
        int mx=0;
        
        for(int i=0;i<n;i++)
        {
            mp[a[i]]++;
            mx=max(mx,a[i]);
        }
        
        vector<int> dp(mx+2,0);
        
        dp[1]=mp[1];
        dp[2]=max(dp[1],mp[2]*2);
        
        for(int i=3;i<=mx;i++)
        {
            dp[i]=max(dp[i-1],dp[i-2]+(mp[i]*i));
        }
        
        return dp[mx];
    }
};