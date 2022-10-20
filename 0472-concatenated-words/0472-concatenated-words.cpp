class Solution {
public:
    
    unordered_set<string> mp;
    
    int dp[31];
    
    bool solve(int i,string &s,int c)
    {
        if(i==s.size())
        {
            if(c>=2)
            {
                return 1;
            }
            
            return 0;
        }
        
        string t="";
        
        for(int j=i;j<s.size();j++)
        {
            t+=s[j];
            
            if(mp.find(t)!=mp.end() && solve(j+1,s,c+1))
            {
                return dp[i]=1;
            }
        }
        
        return dp[i]=0;
    }
    
    vector<string> findAllConcatenatedWordsInADict(vector<string>& w) {
        
        for(auto x:w)
        {
            mp.insert(x);
        }
        
        vector<string> ans;
        
        for(auto x:w)
        {
            memset(dp,-1,sizeof(dp));
            if(solve(0,x,0))
            {
                ans.push_back(x);
            }
        }
        
        return ans;
    }
};