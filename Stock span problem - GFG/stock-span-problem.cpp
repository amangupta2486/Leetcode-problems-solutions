// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int p[], int n)
    {
       vector<int> v(n);
       
       stack<int> s;
       
       for(int i=0;i<n;i++)
       {
           while(!s.empty() && p[s.top()]<=p[i])
           {
               s.pop();
           }
           
           if(s.empty())
           {
               v[i]=i+1;
           }
           
           else
           {
               v[i]=i-s.top();
           }
           s.push(i);
       }
       
       return v;
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
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
  // } Driver Code Ends