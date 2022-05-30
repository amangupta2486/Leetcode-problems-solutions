class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        string a="",b="";
        int n=s.size();
        int m=t.size();
        
        for(int i=0;i<n;i++)
        {
            if(s[i]=='#' && a.size()>0)
            {
                a.pop_back();
            }
            else if(s[i]!='#')
            {
                a+=s[i];
            }
        }
        
        for(int i=0;i<m;i++)
        {
            if(t[i]=='#' && b.size()>0)
            {
                b.pop_back();
            }
            else if(t[i]!='#')
            {
                b+=t[i];
            }
        }
        
        return a==b;
    }
};