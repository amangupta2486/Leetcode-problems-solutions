// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        
        int n=s.size();
        
        int p=0;
        
        int i=0,f=0;
        
        if(s[i]=='-')
        {
            f=1;
            i=1;
        }
        
        for(i;i<n;i++)
        {
            if(s[i]>=48 && s[i]<=57)
            {
                p+=s[i]-'0';
            }
            
            else
            {
                return -1;
            }
            
            if(i!=n-1)
            p*=10;
        }
        
        if(f)
        {
            return -1*p;    
        }
        
        return p;
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}  // } Driver Code Ends