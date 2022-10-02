class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& a) {
        
        map<string,vector<string>> mp;
        
        for(auto x:a)
        {
            string s=x;
            sort(s.begin(),s.end());
            
            mp[s].push_back(x);
        }
        
        vector<vector<string>> ans;
        
        for(auto x:mp)
        {
            vector<string> v;
            
            for(auto i:x.second)
            {
                v.push_back(i);
            }
            
            ans.push_back(v);
        }
        
        return ans;
    }
};