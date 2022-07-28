class Solution {
public:
    bool isAnagram(string s, string t) {
        
        vector<int> v(26,0),b(26,0);
        
        int n=s.size();
        
        for(int i=0;i<n;i++)
        {
            v[s[i]-'a']++;
        }
        
        for(int i=0;i<t.size();i++)
        {
            b[t[i]-'a']++;
        }
        
        for(int i=0;i<26;i++)
        {
            if(b[i]!=v[i])
            {
                return 0;
            }
        }
        
        return 1;
    }
};