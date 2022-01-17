// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    
    int solve(int i,int j,vector<int> &a,vector<vector<int>> &dp)
    {
        if(i==j)
        {
            return a[i];
        }
        
        if(i>j)
        {
            return 0;
        }
        
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        
        int l = a[i] + min(solve(i+1,j-1,a,dp),solve(i+2,j,a,dp));
        int r = a[j] + min(solve(i+1,j-1,a,dp),solve(i,j-2,a,dp));
        
        return dp[i][j]=max(l,r);
    }
    int maxCoins(vector<int>&a,int n)
    {
	    //Write your code here
	    
	    vector<vector<int>> dp(n,vector<int>(n,-1));
	    return solve(0,n-1,a,dp);
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int>A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        Solution ob;
        cout << ob.maxCoins(A, N) << "\n";
    }
    return 0;
}
  // } Driver Code Ends