// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
     	vector<string> ans;
	    
	    void solve(string s,string &a,int i,int n)
	    {
	        if(i==n)
	        {
	            if(s!="")
	            ans.push_back(s);
	            return;
	        }
	        
	        solve(s+a[i],a,i+1,n);
	        solve(s,a,i+1,n);
	    }
	    
		vector<string> AllPossibleStrings(string s){
		    
		    int n=s.size();
		    
		    solve("",s,0,n);
		    
		    sort(ans.begin(),ans.end());
		    
		    return ans;
		}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}  // } Driver Code Ends