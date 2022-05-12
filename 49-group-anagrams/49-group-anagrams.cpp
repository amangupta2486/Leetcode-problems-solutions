class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& a) {
        
        map<string,vector<string>> mp;
        
        for(auto i:a)
        {
            string s=i;
            sort(s.begin(),s.end());
            mp[s].push_back(i);
        }
        
        vector<vector<string>> ans;
        
        for(auto i:mp)
        {
            vector<string> v;
            for(auto j:i.second)
            {
                v.push_back(j);
            }
            ans.push_back(v);
        }
        
        return ans;
    }
};