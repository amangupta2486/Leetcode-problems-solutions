class Solution {
public:
    bool wordPattern(string p, string s) {
        
        int n=p.size();
        
        int m=s.size();
        
        string t="";
        vector<string> v;
        
        for(int i=0;i<m;i++)
        {
            if(s[i]!=' ')
            t+=s[i];
            
            else
            {
                v.push_back(t);
                t="";
            }
        }
        
        if(t!="")
        {
            v.push_back(t);
        }
        
        unordered_map<char,set<string>> mp;
        unordered_map<string,set<char>> mp1;
        
        int l=v.size();
        
        if(n!=l)
        {
            return 0;
        }
        
        for(int i=0;i<n;i++)
        {
            
            mp[p[i]].insert(v[i]);
            mp1[v[i]].insert(p[i]);
            
            if(mp[p[i]].size()>1 || mp1[v[i]].size()>1)
            {
                return 0;
            }
        }
        
        return 1;
    }
};