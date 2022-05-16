// { Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    int findPages(int a[], int n, int k) 
    {
        int l=INT_MIN;
        int r=0;
        
        for(int i=0;i<n;i++)
        {
            l=max(l,a[i]);
            r+=a[i];
        }
        
        int ans=INT_MAX;
        
        while(l<=r)
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
                ans=m;
                r=m-1;
            }
            else
            {
                l=m+1;
            }
        }
        
        if(ans==INT_MAX)
        {
            return -1;
        }
        
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}
  // } Driver Code Ends