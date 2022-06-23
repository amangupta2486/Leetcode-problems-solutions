// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int>consecutiveSum(int n) { 
        
        vector<int> v;
        
        if(n%3==0)
        {
            int x=n/3;
            v.push_back(x-1);
            v.push_back(x);
            v.push_back(x+1);
            
            return v;
        }
        
        return {-1};
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        vector<int>v = ob.consecutiveSum(n);
        for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
            cout<<endl;
    }
    return 0;
}
  // } Driver Code Ends