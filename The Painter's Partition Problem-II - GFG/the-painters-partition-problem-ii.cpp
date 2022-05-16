// { Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    long long minTime(int a[], int n, int k)
    {
        long long l=INT_MIN;
        long long r=0;
        
        for(int i=0;i<n;i++)
        {
            l=max(l,1ll*a[i]);
            r+=a[i];
            
        }
        
        if(k>=n)
        {
            return l;
        }
        
        while(l<r)
        {
            long long m=(l+r)/2;
            
            long long c=1,s=0;
            
            for(int i=0;i<n;i++)
            {
                if(s+a[i]<=m)
                {
                    s+=a[i];
                }
                else
                {
                    s=a[i];
                    c++;
                }
            }
            
            if(c<=k)
            {
                r=m;
            }
            else
            {
                l=m+1;
            }
        }
        
        return r;
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