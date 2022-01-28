// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int height(int n){
        // code here
        
        // int x = pow(x,2) + x (-2*n);
        
        int x = 1 + (4*2*n);
        int y= sqrt(x);
        
        int z = (y-1)/2;
        
        return z;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.height(N)<<endl;
    }
    return 0;
}  // } Driver Code Ends