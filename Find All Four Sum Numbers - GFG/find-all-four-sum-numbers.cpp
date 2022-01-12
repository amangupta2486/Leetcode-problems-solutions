// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &a, int b) {
        // Your code goes here
        
    int n=a.size();
    vector<vector<int>> ans;

    if(n<4)
    {
        return ans;
    }
    
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int l=j+1;
            int r=n-1;
            int k=b-a[i]-a[j];

            while(l<r)
            {
                int s=a[l]+a[r];

                if(s>k)
                {
                    r--;
                }

                else if(s<k)
                {
                    l++;
                }

                else
                {
                    int x=a[l];
                    int y=a[r];

                    ans.push_back({a[i],a[j],a[l],a[r]});

                    while(l<r && a[l]==x)
                    {
                        l++;
                    }
                    while(l<r && a[r]==y)
                    {
                        r--;
                    }

                }
            }

            while(j+1<n && a[j]==a[j+1])
            {
                j++;
            }
        }

        while(i+1<n && a[i]==a[i+1])
        {
            i++;
        }
    }

    return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends