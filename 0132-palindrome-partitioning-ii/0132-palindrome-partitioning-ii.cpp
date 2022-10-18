class Solution {
public:
    
    int n;
    
    bool check(int i,int j,string &s)
    {
        while(i<j)
        {
            if(s[i]!=s[j])
            {
                return 0;
            }
            
            i++;
            j--;
        }
        
        return 1;
    }
    
    int dp[2005];
    
    int solve(int i,string &s)
    {
        if(i==n)
        {
            return 0;
        }
        
        if(dp[i]!=-1)
        {
            return dp[i];
        }
        
        int ans=n;
        
        for(int j=i;j<n;j++)
        {
            if(check(i,j,s))
            {
                int cost = 1 + solve(j+1,s);
                
                ans=min(ans,cost);
            }
        }
        
        return dp[i]=ans;
    }
    
    int minCut(string s) {
        
        n=s.size();
        
        memset(dp,-1,sizeof(dp));
        
        return solve(0,s)-1;
    }
};