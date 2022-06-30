class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        
        map<string,string> mp;
        
        for(auto i:paths)
        {
            mp[i[0]]=i[1];
        }
        
        int n=paths.size();
        
        string p=paths[0][0];
        
        while(mp.find(p)!=mp.end())
        {
            p=mp[p];
        }
        
        return p;
    }
};