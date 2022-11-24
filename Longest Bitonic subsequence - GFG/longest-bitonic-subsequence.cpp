//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int LongestBitonicSequence(vector<int> a)
	{
	    int n=a.size();
	    
	    vector<int> l(n,1),r(n,1);
	    
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<i;j++)
	        {
	            if(a[i]>a[j] && l[i]<l[j]+1)
	            {
	                l[i]=l[j]+1;
	            }
	        }
	    }
	    
	    for(int i=n-1;i>=0;i--)
	    {
	        for(int j=n-1;j>i;j--)
	        {
	            if(a[i]>a[j] && r[i]<r[j]+1)
	            {
	                r[i]=r[j]+1;
	            }
	        }
	    }
	    
	    int ans=0;
	    
	   // for(int i=0;i<n;i++)
	   // cout<<l[i]<<" ";
	    
	   // cout<<endl;
	    
	   // for(int i=0;i<n;i++)
	   // cout<<r[i]<<" ";
	    
	   // cout<<endl;
	    
	    for(int i=0;i<n;i++)
	    {
	        ans=max(ans,l[i]+r[i]-1);
	    }
	    
	    return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans = ob.LongestBitonicSequence(nums);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends