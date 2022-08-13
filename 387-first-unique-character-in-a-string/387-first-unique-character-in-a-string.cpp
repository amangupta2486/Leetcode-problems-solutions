class Solution {
public:
    int firstUniqChar(string s) {
        
        int n=s.size();
        
        vector<int> mp(26,0);
        
        for(auto i:s)
        {
            mp[i-'a']++;
        }
        
        for(int i=0;i<n;i++)
        {
            if(mp[s[i]-'a']==1)
            {
                return i;
            }
        }
        
        return -1;
    }
};