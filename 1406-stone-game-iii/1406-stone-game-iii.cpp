class Solution {
public:
    
    int dp[100005];
    
    int solve(vector<int>& a,int i,int n)
    {
        if(i>=n)
        {
            return 0;
        }
        
        if(dp[i]!=-1)
        {
            return dp[i];
        }
        int x=INT_MIN,y=INT_MIN,z=INT_MIN;
        
        x=a[i]-solve(a,i+1,n);
        
        if(i+1<n)
        y=a[i]+a[i+1]-solve(a,i+2,n);
        
        if(i+2<n)
        z=a[i]+a[i+1]+a[i+2]-solve(a,i+3,n);
        
        return dp[i]=max({x,y,z});
    }
    string stoneGameIII(vector<int>& a) {
        
        int n=a.size();
        
        memset(dp,-1,sizeof(dp));
        
        int alice=solve(a,0,n);
        
        cout<<alice;
        
        if(alice>0)
        {
            return "Alice";
        }
         if(alice==0)
        {
            return "Tie";
        }
        
        return "Bob";
    }
};