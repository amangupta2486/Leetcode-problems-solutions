// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


 // } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{
    public:
    
    vector<string> ans;
    
    void solve(string s,int i,int j)
    {
        if(i==0 && j==0)
        {
            ans.push_back(s);
            return;
        }
        if(i==0)
        {
            solve(s+')',i,j-1);
            return;
        }
        if(i>j)
        {
            return;
        }
        solve(s+'(',i-1,j);
        solve(s+')',i,j-1);
    }
    
    vector<string> AllParenthesis(int n) 
    {
        solve("",n,n);
        
        return ans;
    }
};

// { Driver Code Starts.


int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 
  // } Driver Code Ends