// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
	bool isPossible(int n, vector<pair<int, int> >& p) {
	    // Code here
	    vector<int> d(n,0);
	    vector<int> v[n];
	    
	    for(auto i:p)
	    {
	        v[i.second].push_back(i.first);
	        d[i.first]++;
	    }
	    
	    queue<int> q;
	    
	    int ans=0;
	    
	    for(int i=0;i<n;i++)
	    {
	        if(d[i]==0)
	        {
	            q.push(i);
	            ans++;
	        }
	    }
	    
	    while(!q.empty())
	    {
	        int k=q.size();
	        
	        while(k--)
	        {
	            auto p=q.front();
	            q.pop();
	            
	            for(auto x:v[p])
	            {
	                d[x]--;
	                
	                if(d[x]==0)
	                {
	                    q.push(x);
	                    ans++;
	                }
	            }
	        }
	    }
	    
	    return ans==n ? 1 : 0;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
    	int N, P;
        vector<pair<int, int> > prerequisites;
        cin >> N;
        cin >> P;
        for (int i = 0; i < P; ++i) {
            int x, y;
            cin >> x >> y;
            prerequisites.push_back(make_pair(x, y));
        }
        // string s;
        // cin>>s;
        Solution ob;
        if (ob.isPossible(N, prerequisites))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
	}
	return 0;
}  // } Driver Code Ends