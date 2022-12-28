//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *a, int n) {
        // code here
        
        int* b=new int[2];
        
        for(int i=0;i<n;i++)
        {
            int idx=abs(a[i])-1;
            
            if(a[idx]>0)
            {
                a[idx]=-a[idx];
            }
            else
            {
                b[0]=abs(a[i]);
            }
        }
        
        for(int i=0;i<n;i++)
        {
            if(a[i]>0)
            {
                b[1]=i+1;
            }
        }
        
        return b;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends