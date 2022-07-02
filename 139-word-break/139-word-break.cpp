class Solution {
public:
    unordered_set<string> mp;
    
    int dp[305];
    
    bool solve(int j,string s, vector<string>& word)
    {
        if(j==s.size())
        {
            return 1;
        }
        
        if(dp[j]!=-1)
        {
            return dp[j];
        }
        
        string t="";
        
        for(int i=j;i<s.size();i++)
        {
            t+=s[i];
            
            if(mp.find(t)!=mp.end() && solve(i+1,s,word))
            {
                return dp[j]=1;
            }
        }
        
        return dp[j]=0;
    }
    bool wordBreak(string s, vector<string>& word) {
        
        int n=s.size();
        
        for(auto i:word)
        {
            mp.insert(i);
        }
        memset(dp,-1,sizeof(dp));
        
        return solve(0,s,word);
    }
};