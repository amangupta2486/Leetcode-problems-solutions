class Solution {
public:
    string removeStars(string s) {
        
        int n=s.size();
        
        string b="";
        
        for(int i=0;i<n;i++)
        {
            if(s[i]=='*')
            {
                b.pop_back();
            }
            else
            {
                b+=s[i];
            }
        }
        
        return b;
    }
};