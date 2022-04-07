// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int minCoins(int c[], int m, int v) 
	{ 
	    int dp[v+1];
	    
	    dp[0]=0;
	    
	    for(int i=1;i<=v;i++)
	    {
	        int ans=INT_MAX;
	        for(int j=0;j<m;j++)
	        {
	            if(c[j]<=i)
	            ans=min(ans,dp[i-c[j]]);
	        }
	        	         
	        if(ans==INT_MAX)
	        dp[i]=INT_MAX;
	        
            if(ans!=INT_MAX)
            dp[i]=1+ans;
	    }
	    
	    if(dp[v]==INT_MAX)
	    return -1;
	    
	    return dp[v];
	} 
	  
};

// 39 8
// 9 2 11 5 14 17 8 18

// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}
  // } Driver Code Ends