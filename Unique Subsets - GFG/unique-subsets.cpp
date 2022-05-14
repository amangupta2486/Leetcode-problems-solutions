// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find all possible unique subsets.
    
    vector<vector<int> > ans;
   // map<vector,int> mp;
    set<vector<int>> s;
    void solve(vector<int> v,vector<int> &a,int i,int n)
    {
        if(i==n)
        {
            // auto it= find(ans.begin(),ans.end(),v);
            // if(it==ans.end())
            // {
            //     ans.push_back(v);
            // }
            s.insert(v);
            //if(mp.find())
            return;
        }
        
        solve(v,a,i+1,n);
        
        v.push_back(a[i]);
        solve(v,a,i+1,n);
        v.pop_back();
        
        
    }
    
    vector<vector<int> > AllSubsets(vector<int> a, int n)
    {

        vector<int> v;
        sort(a.begin(),a.end());
        
        solve(v,a,0,n);
        for(auto i:s)
        {
            ans.push_back(i);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            A.push_back(x);
        }
        Solution obj;
        vector<vector<int> > result = obj.AllSubsets(A,n);
        // printing the output
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}   


  // } Driver Code Ends