// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    string amendSentence (string s)
    {
        int n=s.size();
        string t="";
        
        if(s[0]>='A' && s[0]<='Z')
        t+=s[0]+32;
        
        else
        t+=s[0];
        
        vector<string> v;
        
        for(int i=1;i<n;i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                v.push_back(t);
                t=s[i]+32;
            }
            else
            {
                t+=s[i];
            }
        }
        
        v.push_back(t);
        
        string ans="";
        
        for(auto i:v)
        {
            ans+=i;
            ans+=" ";
        }
        ans.pop_back();
        
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		Solution ob;
		cout << ob.amendSentence (s) << endl;
	}
}  // } Driver Code Ends