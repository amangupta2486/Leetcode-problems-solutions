// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int perfectSum(int a[], int n, int s)
	{
	    int mod=1e9 +7;
        int dp[n+1][s+1];
        
        memset(dp,0,sizeof(dp));
        
        for(int i=0;i<n;i++)
        {
            dp[i][0]=1;
        }
        
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<=s;j++)
            {
                if(a[i-1]<=j)
                {
                    dp[i][j]=(dp[i-1][j] + dp[i-1][j-a[i-1]])%mod;
                }
                else
                {
                    dp[i][j]=dp[i-1][j]%mod;
                }
            }
        }
        
        return dp[n][s]%mod;
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