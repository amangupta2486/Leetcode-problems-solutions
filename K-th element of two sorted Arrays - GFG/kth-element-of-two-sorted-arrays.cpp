// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int kthElement(int a[], int b[], int n, int m, int k)
    {
        int i=0,j=0,c=0;
        
        while(i<n && j<m)
        {
            if(c==k-1)
            {
                return min(a[i],b[j]);
            }
            
            if(a[i]<=b[j])
            {
                i++;
            }
            
            else if(a[i]>b[j])
            {
                j++;
            }
            c++;
        }
        
        while(i<n)
        {
            if(c==k-1)
            {
                return a[i];
            }
            i++;
            c++;
        }
        
        while(j<m)
        {
            if(c==k-1)
            {
                return b[j];
            }
            j++;
            c++;
        }
        return 0;
    }
};

// { Driver Code Starts.
 
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int arr1[n],arr2[m];
		for(int i=0;i<n;i++)
			cin>>arr1[i];
		for(int i=0;i<m;i++)
			cin>>arr2[i];
		
		Solution ob;
        cout << ob.kthElement(arr1, arr2, n, m, k)<<endl;
	}
    return 0;
}  // } Driver Code Ends