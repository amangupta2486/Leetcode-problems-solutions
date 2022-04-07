// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
    string LCP(string a[], int n)
    {
        int mi=INT_MAX;
        
        for(int i=0;i<n;i++)
        {
            int b=a[i].size();
            
            mi=min(mi,b);
        }
        
        string s=a[0];
        
        
        if(n==1)
        return s;
        
        string ans="";
        int f=1;
        
        
         for(int j=0;j<mi;j++)
        {
             for(int i=1;i<n;i++)
            {
                if(s[j]!=a[i][j])
                {
                    f=0;
                    break;
                }
            }
            
            if(f==0)
            break;
            
            ans=s.substr(0,j+1);
        }
        
        if(ans=="")
        return "-1";
        
        return ans;
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
	        cin>>n;
	        string arr[n];
	        for(int i = 0;i<n;i++)
	            cin>>arr[i];
	        Solution ob;
	        cout<<ob.LCP(arr,n)<<endl;
	    }
	return 0;
}  // } Driver Code Ends