class Solution {
public:
    
    int n;
    int solve(int i,int j,int k,vector<int>& a, vector<int>& b,vector<vector<int>> &dp)
    {
        if(k==b.size())
        {
            return 0;
        }
        if(j<i)
        {
            return 0;
        }
        if(i==j)
        {
            return a[i]*b[k];
        }
        
        if(dp[k][i]!=-1)
        {
            return dp[k][i];
        }
        
        int l=a[i]*b[k]+solve(i+1,j,k+1,a,b,dp);
        int r=a[j]*b[k]+solve(i,j-1,k+1,a,b,dp);
        
        return dp[k][i]=max(l,r);
    }
    int maximumScore(vector<int>& a, vector<int>& b) {
        
        n=a.size();
        int m=b.size();
       vector<vector<int>> dp(m,vector<int>(m,-1));
        //memset(dp,-1,sizeof(dp));
        
        //vector<int> dp(m,-1);
        return solve(0,n-1,0,a,b,dp);
        
        //return dp[0][m-1];
    }
};