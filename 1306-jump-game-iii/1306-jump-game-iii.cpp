class Solution {
public:
    
    int ans=0;
    
    int dp[50005];
    int vis[50005];
    
    int solve(int i,int n,vector<int>& a)
    {
        if(i<0 || i>=n)
        {
            return 0;
        }
        
        
        if(dp[i]!=-1)
        {
            return dp[i];
        }
        
        if(a[i]==0)
        {
           return dp[i]=1;
        }
        
        if(vis[i])
        {
            return 0;
        }
        
        vis[i]=1;

        return dp[i]= solve(i+a[i],n,a) || solve(i-a[i],n,a);
    }
    bool canReach(vector<int>& a, int s) {
        
        int n=a.size();
        
        memset(dp,-1,sizeof(dp));
        memset(vis,0,sizeof(dp));
        return solve(s,n,a);
        
        //return ans;
    }
};