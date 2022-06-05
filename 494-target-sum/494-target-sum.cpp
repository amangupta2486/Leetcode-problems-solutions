class Solution {
public:
    
    int ans=0;
    
    int dp[1005][2005];
    
    int solve(int s,int i,int n,vector<int> &a,int t,vector<unordered_map<int,int>> &mp)
    {
        if(i<0)
        {
            if(s==t)
            {
                return 1;
            }
            
            return 0;
        }
        
        if(mp[i].find(s)!=mp[i].end())
        {
            return mp[i][s];
        }
//         if(dp[i][s]!=-1)
//         {
//             return dp[i][s];
//         }
        
       int l= solve(s+a[i],i-1,n,a,t,mp);
       int r= solve(s-a[i],i-1,n,a,t,mp);
        //cout<<l<<" "<<r<<endl;
        //return dp[i][s]=l+r;
        return  mp[i][s]=l+r;
    }
    int findTargetSumWays(vector<int>& a, int t) {
        
    int n=a.size();
    
    memset(dp,-1,sizeof(dp));
    vector<unordered_map<int,int>> mp(n);
        
    return solve(0,n-1,n,a,t,mp);
        
   // return ans;
/*
       int n=a.size(),s=0;
        
        for(int i=0;i<n;i++)
        {
            s+=a[i];
        }
        
        if(s<t || t==0)
        {
            return 0;
        }
        
        int dp[n+1][s+1];
        
        memset(dp,0,sizeof(dp));
        
        for(int i=0;i<=n;i++)
        {
            dp[i][0]=1;
        }
        
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<=s;j++)
            {
                if(a[i-1]<=j)
                {
                    dp[i][j]=(dp[i-1][j] + dp[i-1][j-a[i-1]]);
                }
                else
                {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        
        int x=(t+s)/2;
        
        return dp[n][x];
        */
    }
};

/*
[1,1,1,1,1]
3
[1]
1
[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]
0
[1,0]
1
[0,0,0,0,0,0,0,0,1]
1
[1]
2
*/