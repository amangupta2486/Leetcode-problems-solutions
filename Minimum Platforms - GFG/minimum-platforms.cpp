// { Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int a[], int d[], int n)
    {
    	// Your code here
    	
    	sort(a,a+n);
    	sort(d,d+n);
    	
    	int p=1,r=1;
    	
    	int i=1,j=0;
    	
    	while(i<n  && j<n)
    	{
    	    if(a[i]<=d[j])
    	    {
    	        p++;
    	        i++;
    	        
    	    }
    	    
    	    else if(a[i]>d[j])
    	    {
    	        p--;
    	        j++;
    	    }
    	    
    	    if(r<p)
    	    {
    	        r=p;
    	    }
    	}
    	
    	return r;
    }
};


// { Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}  // } Driver Code Ends