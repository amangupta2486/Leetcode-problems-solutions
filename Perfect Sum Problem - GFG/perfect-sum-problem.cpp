// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    
	public:
	
	int mod=1e9 +7;
	int solve(int i,int n,int *a,int s,int t,vector<vector<int>> &dp)
	{
	    if(i==n || s==t)
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
	        l = solve(i+1,n,a,s+a[i],t,dp) + solve(i+1,n,a,s,t,dp);
	    }
	    
	    else
	    l=solve(i+1,n,a,s,t,dp);
	    
	    return dp[i][s]=l%mod;
	}
	int perfectSum(int a[], int n, int s)
	{
	    
	    //vector<vector<int>> dp(n+1,vector<int>(s+1,-1));

	    //return solve(0,n,a,0,s,dp);
	    
        int dp[n+1][s+1];
        memset(dp,0,sizeof(dp));
        
        for(int i=0;i<=n;i++)
        {
            dp[i][0]=1;
        }
        
        int mod=1e9 + 7;
        
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<=s;j++)
            {
                if(a[i-1]<=j)
                {
                    dp[i][j]=(dp[i-1][j-a[i-1]]+dp[i-1][j])%mod;
                }
                else
                {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        
        return dp[n][s];
	}
	  
};

// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}
  // } Driver Code Ends