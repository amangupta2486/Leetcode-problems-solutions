class Solution {
public:
    
    int dp[10005];
    
    int solve(int i,int n,vector<int>& a)
    {
        if(i>=n-1)
        {
            return 0;
        }
        
        if(dp[i]!=-1)
        {
            return dp[i];
        }
        
        int ans=100000;
        
        for(int j=i;j<i+a[i] && j<n ;j++)
        {
            ans=min(ans,1+solve(j+1,n,a));    
        }
        
        return dp[i]=ans;
    }
    
    int jump(vector<int>& a) {
        
        int n=a.size();
        
        memset(dp,-1,sizeof(dp));
        
        return solve(0,n,a);
    }
};