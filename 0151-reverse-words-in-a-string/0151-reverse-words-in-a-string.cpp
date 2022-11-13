class Solution {
public:
    string reverseWords(string s) {
        
        int n=s.size();
        
        vector<string> v;
        
        string t="";
        
        for(int i=0;i<n;i++)
        {
            if(s[i]!=' ')
            {
                t+=s[i];
            }
            else
            {
                if(t!="")
                {
                    v.push_back(t);
                }
                t="";
            }
        }
        
         if(t!="")
        {
            v.push_back(t);
        }
        
        reverse(v.begin(),v.end());
        
        string ans="";
        
        for(auto x:v)
        {
            ans+=x;
            ans+=" ";
        }
        
        ans.pop_back();
        
        return ans;
    }
};