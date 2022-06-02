// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends

//Function to generate binary numbers from 1 to N using a queue.
vector<string> generate(int n)
{
	vector<string> v(n+1);
	v[0]="0";
	v[1]="1";
	
	for(int i=2;i<=n;i++)
	{
	    v[i]=v[i/2];
	    if(i%2==0)
	    {
	        v[i]+='0';
	    }
	    else
	    {
	        v[i]+='1';
	    }
	}
	v.erase(v.begin()+0);
	
	return v;
}


// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> ans = generate(n);
		for(auto it:ans) cout<<it<<" ";
		cout<<endl;
	}
	return 0;
}  // } Driver Code Ends