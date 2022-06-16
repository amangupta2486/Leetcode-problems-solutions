class Solution {
public:
    vector<string> ans;
    
    void solve(int i,string r,string s)
    {
        if(i==s.size())
        {
            ans.push_back(r);
            return;
        }
        
        if(s[i]>='a' && s[i]<='z')
        {
            char ch=s[i]-32;
            solve(i+1,r+ch,s);
        }
        else if(s[i]>='A' && s[i]<='Z')
        {
            char ch=s[i]+32;
            solve(i+1,r+ch,s);
        }
        solve(i+1,r+s[i],s);
    }
    vector<string> letterCasePermutation(string s) {
        
        solve(0,"",s);
        
        return ans;
    }
};