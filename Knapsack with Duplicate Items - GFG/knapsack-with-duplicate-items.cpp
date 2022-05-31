// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    /*
    int ans=0;
    int dp[1005][1005];
    
    int solve(int i,int s,int n, int w, int val[], int wt[],int c)
    {
        if(i==0 || s>=w)
        {
            return 0;
        }
        
        if(dp[i][s]!=-1)
        {
            return dp[i][s];
        }
        
        int l=0,r=0;
        
        if(s+wt[i]<=w)
        {
            l= max(val[i]+solve(i,s+wt[i],n,w,val,wt,c+val[i]),solve(i-1,s,n,w,val,wt,c));
        }
        
        r=solve(i-1,s,n,w,val,wt,c);
        
        return dp[i][s]=max(l,r);
    }
    */
    int knapSack(int n, int w, int val[], int wt[])
    {
        
        //memset(dp,-1,sizeof(dp));
        //solve(n-1,0,n,w,val,wt,0);
        
        //return ans;
        
        int dp[n+1][w+1];
        memset(dp,0,sizeof(dp));
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=w;j++)
            {
                if(wt[i-1]<=j)
                {
                    dp[i][j]=max(val[i-1]+dp[i][j-wt[i-1]],dp[i-1][j]);
                }
                else
                {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        
        return dp[n][w];
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}  // } Driver Code Ends