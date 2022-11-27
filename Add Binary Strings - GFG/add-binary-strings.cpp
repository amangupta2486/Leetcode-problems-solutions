//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	string addBinary(string a, string b)
	{
	    int n=a.size();
	    int m=b.size();
	    
	    string ans="";
	    
	    int i=n-1,j=m-1;
	    int c=0;
	    
	    while(i>=0 && j>=0)
	    {
	        if(a[i]=='1' && b[j]=='1')
	        {
	            if(c==0)
	            {
	                ans+='0';
	                c=1;
	            }
	            else
	            {
	                ans+='1';
	                c=1;
	            }
	        }
	        else if(a[i]=='0' && b[j]=='0')
	        {
	            if(c==0)
	            {
	                ans+='0';
	            }
	            else
	            {
	                ans+='1';
	                c=0;
	            }
	        }
	        else
	        {
	            if(c==0)
	            {
	                ans+='1';
	                c=0;
	            }
	            else
	            {
	                ans+='0';
	                c=1;
	            }
	        }
	        
	        //cout<<ans<<endl;
	        i--;
	        j--;
	    }
	 
	    while(i>=0)
	    {
	        if(a[i]=='1')
	        {
	            
	            if(c==0)
	            {
	                ans+='1';
	            }
	            else
	            {
	                ans+='0';
	                c=1;
	            }
	        }
	        else
	        {
	            if(c==0)
	            {
	                ans+='0';
	            }
	            else
	            {
	                ans+='1';
	                c=0;
	            }
	        }
	        i--;
	    }
	    
	    while(j>=0)
	    {
	        if(b[j]=='1')
	        {
	            
	            if(c==0)
	            {
	                ans+='1';
	            }
	            else
	            {
	                ans+='0';
	                c=1;
	            }
	        }
	        else
	        {
	            if(c==0)
	            {
	                ans+='0';
	            }
	            else
	            {
	                ans+='1';
	                c=0;
	            }
	        }
	        j--;
	    }
	    
	    if(c==1)
	    {
	        ans+='1';
	    }
	    
	    
	    //cout<<ans<<endl;
	    
	    while(!ans.empty() && ans.back()=='0')
	    {
	        ans.pop_back();
	    }
	    
	    reverse(ans.begin(),ans.end());
	    
	    return ans;
	}
};

//{ Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		string A, B; cin >> A >> B;
		Solution ob;
		cout << ob.addBinary (A, B);
		cout << "\n";
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends