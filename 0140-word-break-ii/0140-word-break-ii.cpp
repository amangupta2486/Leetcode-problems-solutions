class Solution {
public:
    
    unordered_set<string> mp;
    
    vector<string> ans;
    set<string> st;
    void solve(int i,string t,string curr,string &s)
    {
        if(i==s.size()-1)
        {
            curr+=s[i];
            if(mp.find(curr)!=mp.end())
            {
                t+=curr;

                st.insert(t);
            }
            
            return;
        }
        
        curr+=s[i];
        
        if(mp.find(curr)!=mp.end())
        {
            solve(i+1,t+curr+" ","",s);
        }
        
        solve(i+1,t,curr,s);
    }
    
    vector<string> wordBreak(string s, vector<string>& w) {
        
        for(auto x:w)
        {
            mp.insert(x);
        }
        
        mp.insert("");
        
        solve(0,"","",s);
        
        for(auto x:st)
        {
            ans.push_back(x);
        }
        
        return ans;
    }
};