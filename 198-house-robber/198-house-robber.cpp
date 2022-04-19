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
        dp[1]=max(a[0],a[1]);
        
        for(int i=2;i<n;i++)
        {
            dp[i]=max(a[i]+dp[i-2],dp[i-1]);
        }
        
        return dp[n-1];
    }
};