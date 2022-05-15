class Solution {
public:
    string reverseWords(string s) {
        
        int n=s.size();
        
        string t="";
        
        vector<string> v;
        
        for(int i=0;i<n;i++)
        {
            if(s[i]!=' ')
            {
                t+=s[i];
            }
            else
            {
                if(t!="")
                v.push_back(t);
                t="";
            }
        }
        
        if(t!="")
        {
            v.push_back(t);
        }
        
        reverse(v.begin(),v.end());
        
        string ans="";
        
        for(auto i:v)
        {
            ans+=i;
            ans+=" ";
        }
        ans.pop_back();
        
        return ans;
    }
};