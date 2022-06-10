class Solution {
public:
    
    int ans=0;
    int dp[205][20005];
    
    bool solve(int i,int n,int s,int t,vector<int>& a)
    {
        if(i<0 || s==t)
        {
            if(s==t)
            {
                return 1;
            }
            return 0;
        }
        
        if(dp[i][s]!=-1)
        {
            return dp[i][s];
        }
        int l=0,r=0;
        if(a[i]+s<=t)
        {
            l=solve(i-1,n,s+a[i],t,a);
        }
        
        r= solve(i-1,n,s,t,a);
        
        return dp[i][s] = l || r;
    }
    bool canPartition(vector<int>& a) {
        
        int s=0;
        int n=a.size();
        
        for(int i=0;i<n;i++)
        {
            s+=a[i];
        }
        
        if(s&1)
        {
            return 0;
        }
        
        s=s/2;
        
        memset(dp,-1,sizeof(dp));
        return solve(n-1,n,0,s,a);
        
        //return ans;
    }
};