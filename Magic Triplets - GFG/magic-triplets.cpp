//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	
	int cal(int n)
	{
	    return ((n-2)*(n-1))/2;
	}
	int countTriplets(vector<int> a){
	    
	    int n=a.size();
	    
	   int cnt=0;
	   
	    for(int i=0;i<n;i++)
	    {
	      int smaller=0;
	      
	      for(int j=i-1;j>=0;j--)
	      {
	          if(a[j]<a[i])
	          smaller++;
	      }
	      
	      int larger=0;
	      
	      for(int j=i+1;j<n;j++)
	      {
	          if(a[j]>a[i])
	          {
	              larger++;
	          }
	      }
	      
	      cnt+=(smaller*larger);
	    }
	    
	    return cnt;
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
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution ob;
		int ans = ob.countTriplets(nums);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends