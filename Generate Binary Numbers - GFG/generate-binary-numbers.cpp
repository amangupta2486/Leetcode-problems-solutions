// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends

//Function to generate binary numbers from 1 to N using a queue.
vector<string> generate(int n)
{
    vector<string> ans;
    
    for(int i=1;i<=n;i++)
    {
        string s="";
        int m=i;
        while(m>0)
        {
            int p=m%2;
            if(p==0)
            {
                s+='0';
            }
            else
            {
                s+='1';
            }
            m=m/2;
        }
        reverse(s.begin(),s.end());
        ans.push_back(s);
    }
    
    return ans;
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