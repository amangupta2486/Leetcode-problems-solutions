// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// calculate the maximum sum with out adjacent
	
	int solve(int *a,int i,int dp[])
	{
	    if(i==0)
	    {
	        return a[0];
	    }
	    
	    if(i<0)
	    {
	        return 0;
	    }
	    
	    if(dp[i]!=-1)
	    {
	        return dp[i];
	    }
	    
	    int l=INT_MAX,r=INT_MAX;
	    
	    l=a[i]+solve(a,i-2,dp);
	    r=solve(a,i-1,dp);
	    
	    return dp[i]=max(l,r);
	    
	}
	int findMaxSum(int *a, int n) {
        
        int dp[n];
        memset(dp,-1,sizeof(dp));
        
        return solve(a,n-1,dp);
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends