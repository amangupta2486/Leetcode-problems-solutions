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
        int sum=s;
        
        bool dp[n+1][s+1];
        
        memset(dp,0,sizeof(dp));

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
                    dp[i][j]=dp[i-1][j] || dp[i-1][j-a[i-1]];
                }
                else
                {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        
        int mx=0;
        
        for(int j=1;j<=s/2;j++)
        {
            if(dp[n][j])
            {
                mx=max(mx,j);
            }
        }
        
        return s-(2*mx);
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