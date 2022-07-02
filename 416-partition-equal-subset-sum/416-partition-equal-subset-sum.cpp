class Solution {
public:
    
    int dp[205][20005];
    int n;
    
    int solve(int i,int s,vector<int>& a)
    {
        if(i==n || s==0)
        {
            if(s==0)
            {
                return 1;
            }
            return 0;
        }
        
        if(dp[i][s]!=-1)
        {
            return dp[i][s];
        }
        
        int ans=0;
        
        if(a[i]<=s)
        {
            ans=solve(i+1,s-a[i],a);
        }
        
        ans|=solve(i+1,s,a);
        
        return dp[i][s]=ans;
    }
    
    bool canPartition(vector<int>& a) {
        
        n=a.size();
        
        int s=0;
        
        for(int i=0;i<n;i++)
        {
            s+=a[i];
        }
        
        if(s%2==1)
        {
            return 0;
        }
        
        s=s/2;
        
        //int dp[n+1][s+1];
        memset(dp,-1,sizeof(dp));
        
        return solve(0,s,a);
        
        // for(int j=0;j<=s;j++)
        // {
        //     cout<<dp[n][j]<<" ";
        // }
        // cout<<endl;
       // return dp[n][s];
    }
};

//[1,2,5]