// { Driver Code Starts
#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    
    int mod = 1e9 +7;
    
    long long countWays(int n, int k){
       
       if(n==1)
       {
           return k;
       }
       
       vector<vector<long long>> dp(n+1,vector<long long>(3,0));
       
       dp[1][0]=k%mod;
       dp[1][1]=(k*(k-1))%mod;
       dp[1][2]=(dp[1][0]+dp[1][1])%mod;
       
       for(int i=2;i<=n;i++)
       {
           dp[i][0]=dp[i-1][1]%mod;
           dp[i][1]=(dp[i-1][2]*(k-1))%mod;
           dp[i][2]=(dp[i][0]+dp[i][1])%mod;
       }
       
       return dp[n-1][2];
    }
};

// { Driver Code Starts.

int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		Solution ob;
		cout<<ob.countWays(n,k)<<endl;
	}
	return 0;
}  // } Driver Code Ends