class Solution {
public:
    
    int n;
    int dp[25];
    unordered_set<string> mp;
    vector<string> ans;
    
    void solve(int j,string &s,string t)
    {
        if(j==n)
        {
            t.pop_back();
            ans.push_back(t);
            return;
        }
        
        string r="";
        
        for(int i=j;i<n;i++)
        {
            r+=s[i];
            
            if(mp.find(r)!=mp.end())
            {
                solve(i+1,s,t+r+" ");
            }
        }
    }
    
    vector<string> wordBreak(string s, vector<string>& w) {
        
        n=s.size();
        
        for(auto x:w)
        mp.insert(x);
        
        solve(0,s,"");
        
        return ans;
    }
};