// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    int dp[1005][1005];
    int solve(string &a,string &b,int i,int j)
    {
        if(i>j)
        {
            return 0;
        }
        
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        if(a[i]==b[j])
        {
            return dp[i][j]=solve(a,b,i+1,j-1);
        }
        
        return dp[i][j]=1+min(solve(a,b,i+1,j),solve(a,b,i,j-1));
    }
    int countMin(string str){
    
    int n=str.size();
    string b=str;
    reverse(b.begin(),b.end());
    memset(dp,-1,sizeof(dp));
    
    return solve(str,str,0,n-1);
    }
};

// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        Solution ob;
        cout << ob.countMin(str) << endl;
    }
return 0;
}

  // } Driver Code Ends