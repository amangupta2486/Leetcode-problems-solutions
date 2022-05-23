class Solution {
public:
    
    // vector<vector<string>> ans;
    int ans=0;
    int dp[605][105][105];
    
    int solve(int i,int c,int l,vector<string>& s,int m,int n)
    {
        if(i<0)
        {
            return 0;
        }
        
        if(dp[i][m][n]!=-1)
        {
            return dp[i][m][n];    
        }
        
        string a=s[i];
        int c0=0,c1=0;
        
        for(int j=0;j<a.size();j++)
        {
              if(a[j]=='0')
              {
                  c0++;
              }
              if(a[j]=='1')
              {
                  c1++;
              }
        }
        
        int x=0,y=0;
        
        if(c0<= m && c1<=n)
        {
           x = 1+solve(i-1,c+1,l,s,m-c0,n-c1);
        }
        
        y =solve(i-1,c,l,s,m,n);
        
        return dp[i][m][n]=max(x,y);
    }
    
    int findMaxForm(vector<string>& s, int m, int n) {
        
        int l=s.size();
        
        memset(dp,-1,sizeof(dp));
        
        return solve(l-1,0,l,s,m,n);
        

    }
};

/*
["0","11","1000","01","0","101","1","1","1","0","0","0","0","1","0","0110101","0","11","01","00","01111","0011","1","1000","0","11101","1","0","10","0111"]
9
80
*/