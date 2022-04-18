// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    long long f=1e9 + 7;
    
    long long pow(long long k,long long m)
    {
       long long p=1;
       
       while(m>0)
       {
           if(m&1)
           {
               p=(p*k)%f;
           }
           
           m=m>>1;
           k=(k*k)%f;
       }
       
       return p;
    }
    long long karyTree(int k, int m) {
        
        long long d=1;
        
        return pow(k,m);
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int k,m;
        
        cin>>k>>m;

        Solution ob;
        cout << ob.karyTree(k,m) << endl;
    }
    return 0;
}  // } Driver Code Ends