// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    
    // int n=a.size();
    if(m==1)
    {
        return 0;
    }
    sort(a.begin(),a.end());
    
    // for(int i=0;i<n;i++)
    // {
    //     cout<<p[i]<<" ";
    // }
    long long mi=INT_MAX;
    
    for(int i=0;i<n-m+1;i++)
    {
        long long d=a[i+m-1]-a[i];
        
        mi=min(mi,d);
    }
    
    return mi;
    }   
};

// { Driver Code Starts.
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}  // } Driver Code Ends