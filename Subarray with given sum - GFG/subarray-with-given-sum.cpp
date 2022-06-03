// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int a[], int n, long long s)
    {
        vector<int> p(n+1,0);
        
        for(int i=1;i<=n;i++)
        {
            p[i]=p[i-1]+a[i-1];
        }
        
        int i=0,j=0,f=0;
        
        while(i<=n && j<=n)
        {
            if(p[i]-p[j]==s)
            {
                f=1;
                break;
            }
            
            else if(p[i]-p[j]>s)
            {
                j++;
            }
            else if(p[i]-p[j]<s)
            {
                i++;
            }
        }
        
        if(f==0)
        {
            return {-1};
        }
        
        return {j+1,i};
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends