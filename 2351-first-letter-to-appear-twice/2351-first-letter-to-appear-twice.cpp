class Solution {
public:
    char repeatedCharacter(string s) {
        
        int n=s.size();
        
        vector<int> mp(26,0);
        
        for(auto i:s)
        {
            mp[i-'a']++;
            
            if(mp[i-'a']==2)
            {
                return i;
            }
        }
        
        
        return s[1];
        
    }
};