class Solution {
public:
    
    int dp[505][505];
    
    int solve(string &a, string &b,int i,int j)
    {
        if(j==0)
        {
            return i;
        }
        
        if(i==0)
        {
            return j;
        }
        
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        
        if(a[i-1]==b[j-1])
        {
            return solve(a,b,i-1,j-1);
        }
        
        return dp[i][j]=1+min({solve(a,b,i-1,j),solve(a,b,i,j-1),solve(a,b,i-1,j-1)});
    }
    
    int minDistance(string a, string b) {
        
        int n=a.size();
        int m=b.size();
        
        memset(dp,-1,sizeof(dp));
        
        return solve(a,b,n,m);
    }
};