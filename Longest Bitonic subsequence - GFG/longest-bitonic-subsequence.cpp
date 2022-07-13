// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	int LongestBitonicSequence(vector<int> a)
	{
	   int n=a.size();
	   
	   vector<int> lis(n,1),dis(n,1);
	   
	   for(int i=0;i<n;i++)
	   {
	       for(int j=0;j<i;j++)
	       {
	           if(a[j]<a[i] && lis[i]<lis[j]+1)
	           {
	             lis[i]=lis[j]+1;   
	           }
	       }
	   }
	   
	   for(int i=n-1;i>=0;i--)
	   {
	       for(int j=n-1;j>i;j--)
	       {
	           if(a[j]<a[i] && dis[i]<dis[j]+1)
	           {
	             dis[i]=dis[j]+1;   
	           }
	       }
	   }
	   
	   int ans=0;
	   
	   for(int i=0;i<n;i++)
	   {
	       ans=max(ans,lis[i]+dis[i]-1);
	   }
	   
	   return ans;
	}
};

// { Driver Code Starts.
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
}  // } Driver Code Ends