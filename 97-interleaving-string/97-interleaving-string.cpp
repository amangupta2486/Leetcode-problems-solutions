class Solution {
public:
    
    int n,m,l;
    
    //int ans=0;
    
    int dp[105][105];
    
    int solve(string &s1, string &s2, string &s3,int i,int j,int k,string s)
    {
        // if(s.size()==n+m)
        // cout<<s<<endl;
        
        if(i==n && j==m)
        {
            if(s==s3)
            {
                return 1;
            }
            return 0;
        }
        
        if(i>n || j>m)
        {
            return 0;
        }
       
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        
        int ans=0;
        
         if(i<n && s1[i]==s3[k])
         ans|=solve(s1,s2,s3,i+1,j,k+1,s+s1[i]); 
         
         if(j<m && s2[j]==s3[k])
         ans|=solve(s1,s2,s3,i,j+1,k+1,s+s2[j]);
        
        return dp[i][j]=ans;
    
    }
    bool isInterleave(string s1, string s2, string s3) {
        
        n=s1.size();
        m=s2.size();
        l=s3.size();
        
        if(l!=n+m)
        {
            return 0;
        }
        
        memset(dp,-1,sizeof(dp));
        
        string s="";
        
        return solve(s1,s2,s3,0,0,0,s);
        
        //return ans;
    }
};
/*
"abaaacbacaab"
"bcccababccc"
"bcccabaaaaabccaccbacabb"
*/