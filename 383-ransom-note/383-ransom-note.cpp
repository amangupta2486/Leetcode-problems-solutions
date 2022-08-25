class Solution {
public:
    bool canConstruct(string a, string b) {
        
        vector<int> v1(26,0),v2(26,0);
        
        for(auto i:a)
        {
            v1[i-'a']++;
        }
        
        for(auto i:b)
        {
            v2[i-'a']++;
        }
        
        for(int i=0;i<a.size();i++)
        {
            if(v1[a[i]-'a']>v2[a[i]-'a'])
            {
                return 0;
            }
        }
        
        return 1;
    }
};