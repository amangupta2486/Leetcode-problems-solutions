class Solution {
public:
    
    int ans=0;
    
    int dp[55][5];
    
    int solve(int i,string b,string &s,int n)
    {
        if(i<0 || b.size()==n)
        {
            if(b.size()==n)
            {   
                //cout<<b<<" ";
                return 1;
            }
            return 0;
        }
        int x=b.size();
        
        int j=b.size();
        
        if(dp[j][i]!=-1)
        {
            return dp[j][i];
        }
        
        dp[j][i]=solve(i,b+s[i],s,n)+solve(i-1,b,s,n);;
        
        
        return dp[j][i];
        
    }
    int countVowelStrings(int n) {
        
        memset(dp,-1,sizeof(dp));
        
        string s="aeiou";
        
        return solve(4,"",s,n);
        
    }
};