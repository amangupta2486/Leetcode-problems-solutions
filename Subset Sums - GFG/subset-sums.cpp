// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    vector<int> ans;
    
    void solve(int s,vector<int> a,int i, int n)
    {
        if(i==n)
        {
            ans.push_back(s);
            return;
        }
        
        solve(s,a,i+1,n);
        solve(s+a[i],a,i+1,n);
        
    }
    vector<int> subsetSums(vector<int> a, int n)
    {
        solve(0,a,0,n);
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