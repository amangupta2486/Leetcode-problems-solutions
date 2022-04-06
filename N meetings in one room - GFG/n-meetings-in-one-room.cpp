// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int s[], int e[], int n)
    {
        vector<vector<int>> v;
        
        for(int i=0;i<n;i++)
        {
            v.push_back({s[i],e[i]});
        }
        
        sort(v.begin(),v.end(),[&](auto &a,auto &b){
            return a[1]<b[1];
        });
        
        int p=v[0][1];
        int ans=1;
        
        for(int i=1;i<n;i++)
        {
            if(v[i][0]>p)
            {
                ans++;
                p=v[i][1];
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
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends