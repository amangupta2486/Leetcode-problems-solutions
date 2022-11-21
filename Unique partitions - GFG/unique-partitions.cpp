//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	vector<vector<int>> ans;
	
	void solve(int i,int s,int n,vector<int> v)
	{
	    if(i>n || s>=n)
	    {
	        if(s==n)
	        {
	            auto it=find(ans.begin(),ans.end(),v);
	            
	            if(it==ans.end())
	            {
	                 sort(v.rbegin(),v.rend());
	                ans.push_back(v);
	            }
	        }
	        
	       return;
	    }
	    
	     v.push_back(i);
	     solve(i,s+i,n,v);
	     v.pop_back();
	     solve(i+1,s,n,v);
	 
	}
	
    vector<vector<int>> UniquePartitions(int n) {
        
        vector<int> v;
        
        solve(1,0,n,v);
        
        sort(ans.rbegin(),ans.rend());
        
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
		Solution ob;
		vector<vector<int>> ans = ob.UniquePartitions(n);
    	for(auto i : ans)
    		for(auto j: i)
    			cout << j <<" ";
    	cout << "\n";
	}  
	return 0;
}
// } Driver Code Ends