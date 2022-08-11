class Solution {
public:
    
    int as=0;
    
    int dp[100005];
    int vis[100005];
    
    int solve(int i,int n,vector<int>& a)
    {
        if(a[i]==0)
        {
            return 1;
        }
        
        //cout<<i<<" ";
        
        if(dp[i]!=-1)
        {
            return dp[i];
        }
        
        int ans=0;
        
        if(i+a[i]<n && vis[i+a[i]]==0)
        {
            vis[i+a[i]]=1;
            ans|=solve(i+a[i],n,a);
            
        }
        
        if(i-a[i]>=0 && vis[i-a[i]]==0)
        {
            vis[i-a[i]]=1;
           ans|=solve(i-a[i],n,a);
        }
        
        return dp[i]=ans;
    }
    
    bool canReach(vector<int>& a, int st) {
        
        int n=a.size();
        
        memset(dp,-1,sizeof(dp));
        memset(vis,0,sizeof(dp));
        
        return solve(st,n,a);
    }
};