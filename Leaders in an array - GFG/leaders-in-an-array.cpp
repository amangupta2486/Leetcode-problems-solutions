// { Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
    

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        
        set<int> s;
        unordered_map<int,int> m;
        vector<int> v;
          
        for(int i=n-2;i>=0;i--)
        {
            if(a[i]<a[i+1])
            {
                a[i]=a[i+1];
            }
            else
            {
                v.push_back(a[i]);
            }
            //a[i]=max(a[i],a[i+1]);
        }
         
        reverse(v.begin(),v.end());
        
        for(int i=0;i<n;i++)
        {
            // cout<<a[i]<<" ";
            // s.insert(a[i]);
            
            // if(m[a[i]]==0)
            // {
            //     m[a[i]]++;
            //     v.push_back(a[i]);
            // }
            // if(a[i]!=a[i+1])
            // {
            //     v.push_back(a[i]);
            // }
            //cout<<a[i]<<" ";
        } 
        
        if(n>2)
        {
            v.push_back(a[n-1]);
        }
        // for(auto i:s)
        // {
        //     v.push_back(i);
        // }
        
        // sort(v.rbegin(),v.rend());
        
        // if(v.size()==0)
        // {
        //     v.push_back(a[n-1]);
        // }
        
        return v;
        
    }
};

// { Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}
  // } Driver Code Ends