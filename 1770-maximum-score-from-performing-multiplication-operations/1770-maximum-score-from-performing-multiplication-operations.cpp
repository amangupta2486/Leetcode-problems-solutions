class Solution {
public:
    
    //int dp[1005];
    
    long long solve(int i,int j,int n,int k,vector<int>& a, vector<int>& b,vector<vector<int>> &dp)
    {
        if(j<i || k==b.size())
        {
            return 0;
        }
        
        if(i==j)
        {
            return dp[i][j]=a[i]*b[k];
        }
        
        if(dp[k][i]!=-1)
        {
            return dp[k][i];
        }
        
        long long l=a[i]*b[k] + solve(i+1,j,n,k+1,a,b,dp);
        long long r=a[j]*b[k] + solve(i,j-1,n,k+1,a,b,dp);
        
        return dp[k][i]=max(l,r);
        
    }
    int maximumScore(vector<int>& a, vector<int>& b) {
        
        int n=a.size();
        int m=b.size();
        
        //memset(dp,-1,sizeof(dp));
        
        vector<vector<int>> dp(m,vector<int>(m,-1));
        
        return solve(0,n-1,n,0,a,b,dp);
    }
};