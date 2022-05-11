// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	
	int minSwaps(vector<int>& a)
	{
	    int n=a.size();
	    
	    int vis[n+1];
	    memset(vis,0,sizeof(vis));
	    
	    int ans=0;

	    vector<vector<int>> v;
	    
	    for(int i=0;i<n;i++)
	    {
	        v.push_back({a[i],i});
	    }
	    
	    sort(v.begin(),v.end());
	    
	    for(int i=0;i<n;i++)
	    {
	        if(vis[i] || v[i][1]==i)
	        continue;
	        
	        int j=i;
	        int c=0;
	        while(!vis[j])
	        {
	            vis[j]=1;
	            j=v[j][1];
	            c++;
	        }
	        if(c>0)
	        {
	            ans+=(c-1);
	        }
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
		Solution obj;
		int ans = obj.minSwaps(nums);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends