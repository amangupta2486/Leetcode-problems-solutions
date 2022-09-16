class Solution {
public:
    
    //int dp[100005];
    
    int solve(int i,int j,int k,int m,vector<int>& a, vector<int>& mul,vector<vector<int>> &dp)
    {
        if(i>j || k>=mul.size())
        {
            return 0;
        }
    
        if(dp[k][i]!=-100000000)
        {
            return dp[k][i];
        }
        
        int l=(a[i]*mul[k] )+ solve(i+1,j,k+1,m,a,mul,dp);
        int r=(a[j]*mul[k] )+ solve(i,j-1,k+1,m,a,mul,dp);
        
        return dp[k][i]=max(l,r);
    }
    
    int maximumScore(vector<int>& a, vector<int>& mul) {
        
        int n=a.size();
        int m=mul.size();
        
        vector<vector<int>> dp(m+1,vector<int>(m+1,-100000000));
        
        return solve(0,n-1,0,m,a,mul,dp);
    }
};