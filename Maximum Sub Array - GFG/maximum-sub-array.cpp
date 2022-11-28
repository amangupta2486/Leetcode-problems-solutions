//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	vector<int> findSubarray(int a[], int n) {
	   
	   int l=0,r=0,c=0,mc=0;
	   int mx=0,curr=0;
	   
	   for(int i=0;i<n;i++)
	   {
	       if(a[i]<0)
	       {
	           curr=0;
	           c=0;
	           continue;
	       }
	       
	       curr=max(a[i],curr+a[i]);
	       c++;
	       
	        
	       if(mx<curr)
	       {
	           mx=curr;
	           r=i;
	           mc=c;
	       }
	       
	       if(mx==curr && c>mc)
           {
               r=i;
               mc=c;
           }

	   }
	   
	   vector<int> v;
	  // cout<<mx<<" "<<r<<endl;
	   
	   if(mx==0)
	   return {-1};
	   
	   for(int i=r-mc+1;i<=r;i++)
	   {
	       v.push_back(a[i]);
	   }
	   
	   return v;
	}
};

//{ Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findSubarray(a, n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends