//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:

    int solve(vector<int> &a,int m,int k)
    {
        int n=a.size();
        
        int c=1,prev=a[0];
        
        for(int i=1;i<n;i++)
        {
            if(a[i]-prev>=m)
            {
                c++;
                prev=a[i];
            }
            
            if(c==k)
            {
                return 1;
            }
        }
        
        return 0;
    }

    int solve(int n, int k, vector<int> &a) {
        
        sort(a.begin(),a.end());
        
        int l=1,r=0;
        
        for(int i=0;i<n;i++)
        {
            r=max(r,a[i]);
        }
        
        int ans=0;
        
        while(l<=r)
        {
            int m=(l+r)/2;

            if(solve(a,m,k))
            {
                ans=m;
                l=m+1;
            }
            else
            {
                r=m-1;
            }
        }
        
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends