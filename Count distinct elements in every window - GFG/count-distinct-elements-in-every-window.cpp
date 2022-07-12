// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends

class Solution{
  public:
    vector <int> countDistinct (int a[], int n, int k)
    {
        unordered_map<int,int> mp;
        set<int> s;
        
        for(int i=0;i<k;i++)
        {
            mp[a[i]]++;
            s.insert(a[i]);
        }
        
        vector<int> v;
        
        v.push_back(s.size());
        
        int y=s.size();
        for(int i=k;i<n;i++)
        {
           
            int x=a[i-k];
            mp[x]--;
            
            if(mp[x]==0)
            {
                y--;
            }
            
            if(mp[a[i]]==0)
            {
               y++;   
            }
            
            mp[a[i]]++;
            v.push_back(y);
            
        }
        
        //v.push_back(s.size());
        
        return v;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) 
        	cin >> a[i];
        Solution obj;
        vector <int> result = obj.countDistinct(a, n, k);
        for (int i : result) 
        	cout << i << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends