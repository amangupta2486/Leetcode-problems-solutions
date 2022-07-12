// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

class Solution{
  public:
  
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
	    
	    if(i+1+s<=t)
	    {
	        l = max(a[i]+solve(i,n,a,s+i+1,t,dp) , solve(i+1,n,a,s,t,dp));
	    }
	    
	    else
	    l=solve(i+1,n,a,s,t,dp);
	    
	    return dp[i][s]=l;
	}
    int cutRod(int p[], int n) {
        //code here
        //vector<vector<int>> dp(n+1,vector<int>(n+1,-1));

	    //return solve(0,n,p,0,n,dp);
        

        int dp[n+1][n+1];
        memset(dp,0,sizeof(dp));
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(i<=j)
                {
                    dp[i][j]=max(p[i-1]+dp[i][j-i],dp[i-1][j]);
                }
                else
                {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        
        return dp[n][n];
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}  // } Driver Code Ends