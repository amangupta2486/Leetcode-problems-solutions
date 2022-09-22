class Solution {
public:
    string reverseWords(string s) {
        
        int n=s.size();
        
        string t="";
        
        string ans="";
        
        for(int i=0;i<n;i++)
        {
            if(s[i]!=' ')
            {
                t+=s[i];
            }
            else
            {
                reverse(t.begin(),t.end());
                ans+=t;
                ans+=" ";
                t="";
            }
        }
        
        reverse(t.begin(),t.end());
        ans+=t;
        
        return ans;
    }
};