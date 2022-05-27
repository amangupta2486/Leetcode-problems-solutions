class Solution {
public:
    
    int dp[505][505];
    
    int solve(vector<int>& a,int i,int j)
    {
        if(i>j)
        {
            return 0;
        }
        
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        
        int l=a[i]+min({solve(a,i+2,j),solve(a,i,j-1)});
        int r=a[j]+min({solve(a,i+1,j),solve(a,i,j-2)});
        
        return dp[i][j]=max(l,r);
    }
    bool stoneGame(vector<int>& a) {
        
        int n=a.size();
        
        int sum=0;
        
        memset(dp,-1,sizeof(dp));
        
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
        }
        
        int alice=solve(a,0,n-1);
        
        int bob=sum-alice;
        
        if(alice>bob)
        {
            return 1;
        }
        
        return 0;
    }
};