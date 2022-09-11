class Solution {
public:
    
    int dp[505][505];
    
    int solve(int i,int j,vector<int>& p)
    {
        if(i>j)
        {
            return 0;
        }
        
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        
        int l=p[i]+min(solve(i+1,j-1,p),solve(i+2,j,p));
        int r=p[j]+min(solve(i+1,j-1,p),solve(i,j-2,p));
        
        return dp[i][j]=max(l,r);
    }
    
    bool stoneGame(vector<int>& p) {
        
        int n=p.size();
        
        int s=0;
        
        memset(dp,-1,sizeof(dp));
        
        for(int i=0;i<n;i++)
        {
            s+=p[i];
        }
        
        int alice=solve(0,n-1,p);
        
        int bob = s-alice;
        
        if(alice>bob)
        {
            return 1;
        }
        
        return 0;
    }
};