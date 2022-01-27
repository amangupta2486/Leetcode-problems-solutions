class Solution {
public:
    
    int solve(vector<int>& p,int n,int i,int j,vector<vector<int>> &dp)
    {
        if(i==j)
        {
            return p[i];
        }
        
        if(i>j)
        {
            return 0;
        }
        
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        
        int l =p[i]+min(solve(p,n,i+2,j,dp),solve(p,n,i+1,j-1,dp));
        int r =p[j]+min(solve(p,n,i,j-2,dp),solve(p,n,i+1,j-1,dp));
        
        return dp[i][j]=max(l,r);
    }
    
    bool stoneGame(vector<int>& p) {
        
        int n=p.size();
        int s=0;
        vector<vector<int>> dp(n,vector<int>(n,-1));
        
        for(int i=0;i<n;i++)
        {
            s+=p[i];
        }
        
        int q =solve(p,n,0,n-1,dp);
        
        if(q>s-q)
        {
            return 1;
        }
        
        return 0;
    }
};