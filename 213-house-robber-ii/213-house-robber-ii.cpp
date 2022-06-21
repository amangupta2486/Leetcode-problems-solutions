class Solution {
public:
    int rob(vector<int>& a) {
        
        int n=a.size();
        
        if(n<4)
        {
            return *max_element(a.begin(),a.end());
        }
        
        vector<int> dp(n,0);
        dp[0]=a[0];
        dp[1]=max(a[0],a[1]);
        
        for(int i=2;i<n-1;i++)
        {
            dp[i]=max(dp[i-2]+a[i],dp[i-1]);
        }
        
        int p1=*max_element(dp.begin(),dp.end());
        
        vector<int> dp1(n,0);
        dp1[1]=a[1];
        dp1[2]=max(a[2],a[1]);
        
        for(int i=3;i<n;i++)
        {
            dp1[i]=max(dp1[i-2]+a[i],dp1[i-1]);
        }
        
        int p2=*max_element(dp1.begin(),dp1.end());
        
        return max({p1,p2});
    }
};