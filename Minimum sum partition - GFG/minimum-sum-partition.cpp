// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

  public:
	int minDifference(int a[], int n)  { 
	    
	    int s=0;
	    
	    for(int i=0;i<n;i++)
	    {
	        s+=a[i];
	    }
	    
	    bool dp[n+1][s+1];
	    
	    for(int i=0;i<=s;i++)
	    {
	        dp[0][i]=0;
	    }
	    
	    for(int i=0;i<=n;i++)
	    {
	        dp[i][0]=1;
	    }
	    
	    for(int i=1;i<=n;i++)
	    {
	        for(int j=1;j<=s;j++)
	        {
	            if(a[i-1]<=j)
	            {
	                dp[i][j] = dp[i-1][j-a[i-1]] || dp[i-1][j];
	            }
	            else
	            {
	                dp[i][j]=dp[i-1][j];
	            }
	        }
	    }
	    
	    vector<int> v;
	    
	    for(int j=0;j<=s/2;j++)
	    {
	        if(dp[n][j])
	        {
	            v.push_back(j);
	        }
	    }
	    
	    int d = v[v.size()-1];
	    return s-2*d;
	} 
};


// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends