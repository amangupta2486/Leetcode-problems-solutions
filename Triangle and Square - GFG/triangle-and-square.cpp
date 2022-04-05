// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    int countSquare(int b)
    {
	    if(b<4)
	    {
	        return 0;
	    }
	    
	    int a[b+2];
	    a[4]=1,a[5]=1;
	    int j=2;
	    
	    for(int i=6;i<=b;i+=2)
	    {
	        
	        a[i]=a[i-1]+j;
	        //cout<<a[i]<<" ";
	        a[i+1]=a[i];
	        j++;
	    }
	    
	    return a[b];
    }
};



// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int B,count;
    	cin>>B;
    	Solution ob;
    	count = ob.countSquare(B);
    	cout<<count<<endl;
    }
}  // } Driver Code Ends