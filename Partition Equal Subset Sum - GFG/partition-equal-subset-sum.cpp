// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:

    int f=0;
    
    void solve(int i,int t,int n,int s,int a[])
    {
        if(i==n)
        {
            if(s==t)
            {
                f=1;
            }
            
            return;
        }
        
        if(s==t)
        {
            f=1;
        }
        
        
        if(s+a[i]<=t)
        solve(i+1,t,n,s+a[i],a);
        
        solve(i+1,t,n,s,a);
    }
    
    int equalPartition(int n, int a[])
    {
      
        if(n==1)
        {
            return 0;
        }
        
        int s=0;

        for(int i=0;i<n;i++)
        {
            s+=a[i];
        }
        
        if(s%2==1)
        {
            return 0;
        }
        
        int r=s/2;
        int t = pow(2,n);
        
        
        //int dp[n+1][s+1];
        s=s/2;
        
        bool dp[n+1][s+1];
    
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<s+1;j++)
            {
                if(i==0)
                {
                    dp[i][j]=0;
                }
                else if(j==0)
                {
                    dp[i][j]=1;
                }
                
                else if(a[i-1]<=j)
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
        
        // solve(0,s/2,n,0,a);
        //   vector<int> dp()
        // for(int i=0;i<t;i++)
        // {
        //     int p=0;
            
        //     for(int j=0;j<n;j++)
        //     {
        //         int q=1<<j;
                
        //         if(i&q)
        //         {
        //             p+=a[j];
        //         }
                
        //         if(p==r)
        //         {
        //             f=1;
        //             break;
        //         }
        //     }
            
        //     if(f==1)
        //     {
        //         break;
        //     }
        // }
        
        //return f;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}  // } Driver Code Ends