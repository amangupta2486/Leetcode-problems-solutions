// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long a[], long long n) {
        // Your code here
        
        priority_queue<long long> q;
        
        for(long  i=0;i<n;i++)
        {
            q.push(-1*a[i]);
        }
        
        long long s=0;
        
        while(q.size()>1)
        {
            long long b=-1*q.top();
            q.pop();
            
            long long c=-1*q.top();
            q.pop();
            
            s+=(b+c);
            
            q.push(-1*(b+c));
        }
        
        return s;
    }
};


// { Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long i, a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.minCost(a, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends