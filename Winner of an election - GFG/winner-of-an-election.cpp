// { Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string a[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        
        string b="zzzzzzzzzzzz";
        int c=0;
        
        int ans=0;
        
        unordered_map<string,int> m;
        
        // for(auto i:a)
        // {
        //     m[i]++;
        // }
        
        vector<string> p;
        for(int i=0;i<n;i++)
        {
            m[a[i]]++;    
        }
        
        for(int i=0;i<n;i++)
        {
            if(m[a[i]]>ans)
            {
                ans=m[a[i]];
            }
        }
        for(auto i:m)
        {
            if(i.second==ans)
            {
                c=i.second;
                
                p.push_back(i.first);
            }
        }
        
       
        sort(p.begin(),p.end());
        
        vector<string> v;
        string d=to_string(c);
        
        v.push_back(p[0]);
        v.push_back(d);
        
        return v;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr,n);
        
        cout<<result[0] << " " << result[1] << endl;
    }
    return 0;
}
  // } Driver Code Ends