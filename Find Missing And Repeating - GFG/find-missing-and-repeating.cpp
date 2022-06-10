// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *a, int n) {
       
       vector<int> v(100005,0);
       
       for(int i=0;i<n;i++)
       {
          // cout<<a[i]<<" ";
           v[a[i]]++;
       }
    //   for(int i=0;i<n+1;i++)
    //   {
    //       cout<<v[i]<<" ";
    //   }
       
       int f1=0,f2=0;
       
       int* ans=new int[2];
       
       for(int i=1;i<=n;i++)
       {
           if(v[i]==2 && f2==0)
           {
               ans[0]=i;
               f2=1;
           }
           
           if(v[i]==0 && f1==0)
           {
               ans[1]=i;
               f1=1;
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
}  // } Driver Code Ends