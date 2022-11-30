class Solution {
public:
    bool uniqueOccurrences(vector<int>& a) {
        
        int n=a.size();
        
        unordered_map<int,int> mp;
        unordered_set<int> s;
        
        for(auto x:a)
        {
            mp[x]++;
        }
        
        for(auto x:mp){
            s.insert(x.second);
        }
        
        return s.size()==mp.size();
    }
};