class Solution {
public:
    map<string,int> mp;
    vector<string> ans;
    
    void solve(int j,int n,string s,string r, vector<string>& w)
    {
        if(j==n)
        {
            r.pop_back();
            ans.push_back(r);
            return;
        }
        
        string t="";
        for(int i=j;i<n;i++)
        {
            t+=s[i];
            if(mp.find(t)!=mp.end())
            {
                solve(i+1,n,s,r+t+" ",w);
            }
        }
    }
    vector<string> wordBreak(string s, vector<string>& w) {
        
        int n=s.size();
        
        for(auto i:w)
        {
            mp[i]++;
        }
        
        solve(0,n,s,"",w);
        
        return ans;
    }
};