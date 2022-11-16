//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int beautySum(string s) {
        
        int n=s.size();
        int ans=0;
        
        int v[n+1][26];
        memset(v,0,sizeof(v));
        
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<26;j++)
            {
                v[i][j]+=v[i-1][j];
            }
            
            v[i][s[i-1]-'a']++;
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                int mx=1,mi=n;
                
                for(int k=0;k<26;k++)
                {
                    int x=v[j][k]-v[i][k];
                    
                    if(x!=0)
                    {
                         mx=max(mx,x);
                         mi=min(mi,x);
                    }
                }
                
                //cout<<mx<<" "<<mi<<endl;
                
                ans+=mx-mi;
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.beautySum(s) << endl;
    }
    return 0;
}
// } Driver Code Ends