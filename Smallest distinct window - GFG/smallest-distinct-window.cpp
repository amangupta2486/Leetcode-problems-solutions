// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int findSubString(string s)
    {
        int n=s.size();
        set<char> mp1;
        //unordered_map<char,int> mp;
        vector<int> mp(60,0);
        
        for(auto i:s)
        {
            mp1.insert(i);
        }
        
        int ans=n,r=mp1.size(),f=0;
        int j=0;
        for(int i=0;i<n;i++)
        {
            mp[s[i]-'A']++;
            
            if(mp[s[i]-'A']==1)
            {
                f++;
            }
            
            while(f==r)
            {
                ans=min(ans,i-j+1);
                
                mp[s[j]-'A']--;
                if(mp[s[j]-'A']==0)
                {
                    f--;
                }
                j++;
            }
        }
        
        return ans;
    }
};

// { Driver Code Starts.
// Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;
    }
    return 0;
}  // } Driver Code Ends