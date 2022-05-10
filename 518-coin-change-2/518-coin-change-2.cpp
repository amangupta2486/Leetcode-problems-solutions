class Solution {
public:
    
    int ans=0;
    /*
    void solve(vector<int>& a,int t,int i,int s)
    {
        if(i==a.size() || s==t)
        {
            if(s==t)
            {
                ans++;
            }
            return ;
        }
        
        if(s+a[i]<=t)
        {
            solve(a,t,i,s+a[i]);
        }
        solve(a,t,i+1,s);
    }
   */
   /*
    void solve(int i,int a,vector<int>& c,int s)
    {
        if(i==c.size() || s==a)
        {
            if(s==a)
            {
                ans++;
            }
            return;
        }
        
        if(s+c[i]<=a)
        {
            solve(i,a,c,s+c[i]);
        }
        
       solve(i+1,a,c,s);
    }
    */
    int change(int a, vector<int>& c) {
        
        int n=c.size();
        
        // solve(0,a,c,0);
        // return ans;
        
        int dp[n+1][a+1];
        
        memset(dp,0,sizeof(dp));
        
        for(int i=0;i<=n;i++)
        {
            dp[i][0]=1;
        }
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=a;j++)
            {
                if(c[i-1]<=j)
                {
                    dp[i][j]=dp[i][j-c[i-1]]+dp[i-1][j];
                }
                else
                {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        
        return dp[n][a];
        
    }
};

/*
500
[3,5,7,8,9,10,11]
*/