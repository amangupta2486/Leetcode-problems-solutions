class Solution {
public:
    
    
    int dp[1005][1005];
    
    bool solve(string s1, string s2, string s3,int i,int j,int k)
    {
        if(i==s1.size())
        {
            return s2.substr(j)==s3.substr(k);
        }
        
         if(j==s2.size())
        {
            return s1.substr(i)==s3.substr(k);
        }
        
        if(dp[i][j]!=-1)
        {
            return dp[i][j]==1 ? 1:0 ;
        }
        bool ans=false;
        
        if((s3[k]==s1[i] && solve(s1,s2,s3,i+1,j,k+1)) || (s3[k]==s2[j] && solve(s1,s2,s3,i,j+1,k+1)))
        {
            ans=true;
        }
        
        dp[i][j]=ans? 1: 0;
        
        return ans;
    }
    bool isInterleave(string s1, string s2, string s3) {
        
        int n=s1.size();
        int m=s2.size();
        int p=s3.size();
        
        if(n+m!=p)
        {
            return 0;
        }
        
        int i=0,j=0,k=0;
        memset(dp,-1,sizeof(dp));
        
        return solve(s1,s2,s3,i,j,k);
        
    }
};

// "aabc"
// "abad"
// "aabcabad"

// stdout
// 3
// Output
// false
// Expected
// true