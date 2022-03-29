// { Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
#define ll long long
class Solution
{
  public:
  
    long long minTime(int a[], int n, int k)
    {
        // code here
        // return minimum time
        
        ll l=0;
        ll h=0;
        
        ll mx=0;
            
        for(int i=0;i<n;i++)
        {
            mx=max(mx,1ll*a[i]);
        }
            
        l=mx;
        
        if(k>=n)
        {
            return mx;
        }
        
        for(int i=0;i<n;i++)
        {
            h+=a[i];
        }
        ll mi=0;
        
        while(l<=h)
        {
            ll m=(l+h)/2;
            
            ll c=1;
            ll s=0,mx=0;
            for(int i=0;i<n;i++)
            {

                s+=a[i];
                
                if(s>m)
                {
                    s=a[i];
                    c++;
                }
                
                mx=max(mx,s);
            }
            
            if(c<=k)
            {
                mi=m;
                h=m-1;
            }
            else
            {
                l=m+1;
            }
        }
        
        return mi;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}  // } Driver Code Ends