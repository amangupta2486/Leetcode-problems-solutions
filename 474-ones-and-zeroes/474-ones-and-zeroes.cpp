class Solution {
public:
    
    int dp[605][105][105];
    
    int solve(vector<string>& a,int i,int m, int n)
    {
        if(i==a.size())
        {
            return 0;
        }
        
        if(dp[i][m][n]!=-1)
        {
           return dp[i][m][n]; 
        }
        int c0=0,c1=0;
        string s=a[i];
        for(int j=0;j<s.size();j++)
        {
            if(s[j]=='0')
            {
                c0++;
            }
            else
            {
                c1++;
            }
        }
        
        int l=0,r=0;
        
        if(c0<=m && c1<=n)
        {
            l=1+solve(a,i+1,m-c0,n-c1);
        }
        r=solve(a,i+1,m,n);
        
        return dp[i][m][n]=max(l,r);
    }
    int findMaxForm(vector<string>& a, int m, int n) {
        
        memset(dp,-1,sizeof(dp));
        return solve(a,0,m,n);
    }
};