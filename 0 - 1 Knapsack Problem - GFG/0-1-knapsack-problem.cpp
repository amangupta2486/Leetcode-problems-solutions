// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    vector<int> v;
    int ans=0;
    
    int dp[1005][1005];
    
    int solve(int i,int w, int wt[], int val[], int n,int s)
    {
        if(w==0 || i==n)
        {
            //ans=max(ans,s);
            return 0;
        }
        
        if(dp[i][w]!=-1)
        {
            return dp[i][w];
        }

        if(wt[i]<=w)
        {
            return dp[i][w]=max(solve(i+1,w,wt,val,n,s),val[i]+solve(i+1,w-wt[i],wt,val,n,s+val[i]));
        }

        return dp[i][w]=solve(i+1,w,wt,val,n,s);
    }
    
    int knapSack(int w, int wt[], int val[], int n) 
    { 
        memset(dp,-1,sizeof(dp));
        
        return solve(0,w,wt,val,n,0);
        
        //return ans;
    //   int dp[n+1][w+1];
       
    //   memset(dp,0,sizeof(dp));
       
     
    //   for(int i=1;i<=n;i++)
    //   {
    //       for(int j=1;j<=w;j++)
    //       {
    //           if(wt[i-1]<=j)
    //           {
    //               dp[i][j]=max(dp[i-1][j],dp[i-1][j-wt[i-1]]+val[i-1]);
    //           }
    //           else
    //           {
    //               dp[i][j]=dp[i-1][j];
    //           }
    //       }
    //   }
       
    //   return dp[n][w];
    }
};

// { Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends