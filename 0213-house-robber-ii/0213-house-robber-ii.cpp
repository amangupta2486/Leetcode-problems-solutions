class Solution {
public:
    int rob(vector<int>& a) {
        
        int n=a.size();
        
        if(n<3)
        {
            return *max_element(a.begin(),a.end());
        }
        
        vector<int> dp(n,0);
        
        dp[0]=a[0];
        
        if(n>1)
        {
            dp[1]=max(a[0],a[1]);
        }
        
        for(int i=2;i<n-1;i++)
        {
            dp[i]=max(dp[i-2]+a[i],dp[i-1]);
        }
        
        vector<int> dp2(n,0);
        
        dp2[1]=a[1];
        dp2[2]=max(a[1],a[2]);
        
        for(int i=3;i<n;i++)
        {
            dp2[i]=max(dp2[i-2]+a[i],dp2[i-1]);
        }
        
        return max(dp[n-2],dp2[n-1]);
    }
};