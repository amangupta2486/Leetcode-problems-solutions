// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return Largest Number

class Solution
{
    public:
    //Function to return the largest possible number of n digits
    //with sum equal to given sum.
    string largestNumber(int n, int sum)
    {
        vector<int> v;
        
        for(int i=9;i>=0;i--)
        {
            v.push_back(i);
        }
        
        string s="";
        int i=0;
        
        while(n>0 && i<10)
        {
            if(i<10 && v[i]<=sum)
            {
                sum-=v[i];
                //cout<<v[i];
                s+=to_string(v[i]);
                n--;
            }
            else
            {
                i++;
            }
            
        }
        
        if(sum>0)
        return "-1";
        
        return s;
    }
};

// { Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin>>t;

	while(t--)
	{
	    //taking n and sum
		int n,sum;
		cin>>n>>sum;
		
        Solution obj;
        //function call
		cout<<obj.largestNumber(n, sum)<<endl;
	}
	return 0;
}  // } Driver Code Ends