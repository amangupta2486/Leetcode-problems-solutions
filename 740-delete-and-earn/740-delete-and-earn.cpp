class Solution {
public:
    int deleteAndEarn(vector<int>& a) {
        
        int n=a.size();
        
        map<int,int> mp;
        
        for(auto i:a)
        {
            mp[i]++;
        }
        
        int sum=0,mx=0;
        
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
            mx=max(mx,a[i]);
        }
        //cout<<sum<<" ";
        vector<int> dp(mx+2,0);
        
        dp[0]=0;
        dp[1]=mp[1];
       // dp[2]=max(dp[1],mp[2]*2);
        
        for(int i=2;i<=mx;i++)
        {
            dp[i]=max(dp[i-2]+(mp[i]*i),dp[i-1]);
            //cout<<dp[i]<<" ";
        }
        
        return dp[mx];
    }
};