// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string s){
		    
		    int n=s.size();
		  //  string ans="";
		    
		  //  vector<char> v(26,0);
		    
		  //  for(int i=0;i<n;i++)
		  //  {
		  //      v[s[i]]++;
		  //      int f=0;
		  //      for(int i=0;i<n;i++)
		  //      {
		  //          if(v[i])
		  //      }
		  //  }
		   
		   
		    queue<char> q;
		    map<char,int> mp;
		    
		    string ans="";
		    
		    for(int i=0;i<n;i++)
		    {
		        mp[s[i]]++;
		        
		        if(mp[s[i]]==1)
		        {
		            q.push(s[i]);
		        }
		        
	            while(!q.empty() && mp[q.front()]>1)
		        {
		            q.pop();
		        }
    		        
		        if(q.empty())
		        {
		            ans+='#';
		        }
		        else
		        {
		            ans+=q.front();
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
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends