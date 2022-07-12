// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

  public:
	int minDifference(int a[], int n)  { 
	    // Your code goes here
	    /* 
	        s2-s1=diff
	        s-s1-s1=diff;
	        s-2*s1=diff;
	    */
	    
	    int s=0,S=0;
	    
	    for(int i=0;i<n;i++)
	    {
	        s+=a[i];
	    }
	    
	    S=s;
	    //s=s/2;
	    
	    bool dp[n+1][s+1];
	    memset(dp,0,sizeof(dp));
	    
	    for(int i=0;i<=n;i++)
	    dp[i][0]=1;
	    	    
	    for(int i=1;i<=n;i++)
	    {
	        for(int j=1;j<=s;j++)
	        {
	            if(a[i-1]<=j)
	            {
	                dp[i][j]= dp[i-1][j-a[i-1]] || dp[i-1][j];
	            }
	            else
	            {
	                dp[i][j]=dp[i-1][j];
	            }
	        }
	    }
	    
	    int mx=0;
	    
	    for(int i=1;i<=s/2;i++)
	    {
	        if(dp[n][i])
	        {
	            mx=max(mx,i);
	        }
	    }
	    //cout<<mx<<" ";
	    return S-(2*mx);
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