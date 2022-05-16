// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int findKRotation(int a[], int n) {
	    
	    int i=0,j=n-1;
	    
	    while(i<=j)
	    {
	        int m=(i+j)/2;
	        
	        if(a[m]<=a[(m+1)%n] && a[m]<=a[(m+n-1)%n])
	        {
	            return m;
	        }
	        
	        if(a[m]>=a[0])
	        {
	            i=m+1;
	        }
	        else
	        {
	            j=m-1;
	        }
	    }
	    
	    return 0;
	}

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findKRotation(a, n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends