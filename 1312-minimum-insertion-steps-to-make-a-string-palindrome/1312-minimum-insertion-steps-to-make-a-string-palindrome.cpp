class Solution {
public:
    
    int dp[505][505];
    
    int solve(string &a,int i,int j)
    {
        
        if(i>=j)
        {
            return 0;
        }
        
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        if(a[i]==a[j])
        {
            return dp[i][j]=solve(a,i+1,j-1);
        }
        
        return dp[i][j]=1+min(solve(a,i,j-1),solve(a,i+1,j));
    }
    
    int minInsertions(string s) {
        
        int n=s.size();
        
        memset(dp,-1,sizeof(dp));
        
        return solve(s,0,n-1);
    }
};