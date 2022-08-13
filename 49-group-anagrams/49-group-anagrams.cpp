class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string,vector<string>> mp;
        
        for(auto x:strs)
        {
            string s=x;
            
            sort(s.begin(),s.end());
            
            mp[s].push_back(x);
        }
        
        vector<vector<string>> ans;
        
        for(auto s:mp)
        {
            vector<string> v;
            
            for(auto i:s.second)
            {
                v.push_back(i);
            }
            
            ans.push_back(v);
        }
        
        return ans;
    }
};