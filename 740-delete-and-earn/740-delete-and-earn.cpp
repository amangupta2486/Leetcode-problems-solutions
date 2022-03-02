class Solution {
public:
    int deleteAndEarn(vector<int>& a) {
        
        int n=a.size();
        
        if(n==1)
        {
            return a[0];
        }
        
        int mx=*max_element(a.begin(),a.end());
        
        vector<int> f(mx+1,0),dp(mx+1,0);
        
        for(auto i:a)
        {
            f[i]++;
        }
        
        dp[1] = f[1];
        
        dp[2]=max(dp[1],f[2]*2);
        
        for(int i=3;i<=mx;i++)
        {
            dp[i]=max(dp[i-1],dp[i-2]+(i*f[i]));
        }
        
        return dp[mx];
    }
};