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
    int findPages(int a[], int n, int m) 
    {
        int l=0;
        int h=0;
        
        if(m>n)
        {
            return -1;
        }
        
        for(int i=0;i<n;i++)
        {
            l=max(l,a[i]);
            h+=a[i];
        }
        
        int ans=-1;
        
        while(l<=h)
        {
            int mid=(l+h)/2;
            int c=1;
            int s=0;
            
            for(int i=0;i<n;i++)
            {
                if(s+a[i]<=mid)
                {
                    s+=a[i];
                }
                else
                {
                    c++;
                    s=a[i];
                }
            }
            
            if(s>mid)
            c++;
            
            if(c<=m)
            {
                ans=mid;
                
                h=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        
        if(ans==-1)
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