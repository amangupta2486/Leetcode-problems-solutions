class Solution {
public:
    bool isAnagram(string s, string t) {
        
        vector<int> a(26,0),b(26,0);
        
        for(auto i:s)
        {
            a[i-'a']++;
        }
        for(auto j:t)
        {
            b[j-'a']++;
        }
        
        if(a==b)
        {
            return 1;
        }
        
        return 0;
    }
};