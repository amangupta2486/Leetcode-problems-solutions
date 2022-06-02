// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &a, int k) {
        
        vector<vector<int> > ans;
        sort(a.begin(),a.end());
        int n=a.size();
        
        for(int i=0;i<n-3;i++)
        {
            for(int j=i+1;j<n-2;j++)
            {
                int l=j+1,r=n-1;
                
                while(l<r)
                {
                    int s=a[i]+a[j]+a[l]+a[r];
                    
                    if(s<k)
                    {
                        l++;
                    }
                    
                    else if(s>k)
                    {
                        r--;
                    }
                    else
                    {
                        int x=a[l];
                        int y=a[r];
                        
                        while(l+1<r && a[l+1]==x)
                        {
                            l++;
                        }
                        while(l<r-1 && a[r-1]==x)
                        {
                            r--;
                        }
                        
                        ans.push_back({a[i],a[j],x,y});
                        l++;
                        r--;
                    }
                }
                while(j+1<n-2 && a[j+1]==a[j] )
                {
                    j++;
                }
            }
            while(i+1<n-3 && a[i+1]==a[i] )
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