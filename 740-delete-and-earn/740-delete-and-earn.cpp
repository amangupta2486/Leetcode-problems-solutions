class Solution {
public:
    
    map<int,int> mp;
    int dp[10005];
    
    int solve(int i,vector<int> &a)
    {
        if(i==0)
            return 0;
        
        if(i==1)
            return mp[1];
        
        if(dp[i]!=-1)
        {
            return dp[i];
        }
        
        int l=mp[i]*i + solve(i-2,a);
        int r=solve(i-1,a);
        
        return dp[i]=max(l,r);
    }
    int deleteAndEarn(vector<int>& a) {
        
        int n=a.size();
        int mx=0;
        memset(dp,-1,sizeof(dp));
        
        for(int i=0;i<n;i++)
        {
            mp[a[i]]++;
            mx=max(mx,a[i]);
        }
        
        return solve(mx,a);
    }
};