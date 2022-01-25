// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool isSubsetSum(int n, int a[], int s){
        // code here 
        
        bool dp[n+1][s+1];
        
         dp[0][0] = 1;
         
        for (int i = 1; i <= s; i++)
            dp[0][i] = 0;
        for (int i = 1; i <= n; i++)
            dp[i][0] = 1;
            
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<s+1;j++)
            {
               if(a[i-1]<=j)
                {
                    dp[i][j]= dp[i-1][j-a[i-1]] || dp[i-1][j];
                }
                
                else
                {
                    dp[i][j]= dp[i-1][j];
                }
            }
        }
        
        return dp[n][s];
        
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        int arr[N];
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(N, arr, sum) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends