// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	int MinCoin(vector<int> c, int a)
	{
	    int n=c.size();
	    
	    vector<int> dp(a+1,0);
	    
	    for(int i=1;i<=a;i++)
	    {
	        int ans=INT_MAX;
	        
	        for(int j=0;j<n;j++)
	        {
	            if(c[j]<=i)
	            {
	                ans=min(ans,dp[i-c[j]]);
	            }
	        }
	        
	        if(ans!=INT_MAX)
	        {
	            dp[i]=1+ans;
	        }
	        else
	        {
	            dp[i]=INT_MAX;
	        }
	    }
	    
	    if(dp[a]==INT_MAX)
	    {
	        return -1;
	    }
	    
	    return dp[a];
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, amount;
		cin >> n >> amount;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans = ob.MinCoin(nums, amount);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends