// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:

    vector<int> ans;
    
    void solve(vector<int> a, int i,int n,int s)
    {
        if(i==n)
        {
            ans.push_back(s);
            return;
        }
        
        solve(a,i+1,n,s+a[i]);
        solve(a,i+1,n,s);
    }
    vector<int> subsetSums(vector<int> a, int n)
    {
        // Write Your Code here
        
        solve(a,0,n,0);
        
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends