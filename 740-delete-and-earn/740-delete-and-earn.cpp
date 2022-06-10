class Solution {
public:
    int deleteAndEarn(vector<int>& a) {
        
        int n=a.size();
        unordered_map<int,int> mp;
        int mx=0;
        
        for(int i=0;i<n;i++)
        {
            mp[a[i]]++;
            mx=max(mx,a[i]);
        }
        
        vector<int> dp(mx+1,0);
        
        dp[0]=0;
        dp[1]=mp[1];
        
        for(int i=2;i<=mx;i++)
        {
            dp[i]=max(dp[i-2]+(mp[i]*i),dp[i-1]);
        }
        
        return dp[mx];
    }
};