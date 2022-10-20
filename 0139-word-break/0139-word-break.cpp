class Solution {
public:
    
    int n;
    
    unordered_set<string> mp;
    
    int dp[305];
    
    bool solve(int i,string s, vector<string>& w)
    {
        if(i==n)
        {
            return 1;
        }
        
        if(dp[i]!=-1)
        {
            return dp[i];
        }
        
        string t="";
        
        for(int j=i;j<n;j++)
        {
            t+=s[j];
            
            if(mp.find(t)!=mp.end() && solve(j+1,s,w))
            {
                return dp[i]=1;
            }
        }
        
        return dp[i]=0;
    }
    
    bool wordBreak(string s, vector<string>& w) {
        
        n=s.size();
        
        memset(dp,-1,sizeof(dp));
        
        for(auto x:w)
        {
            mp.insert(x);
        }
        
        return solve(0,s,w);
    }
};