class Solution {
public:
    vector<int> topKFrequent(vector<int>& a, int k) {
        
        map<int,int> mp;
        
        for(auto i:a)
        {
            mp[i]++;
        }
        
        vector<vector<int>> v;
        
        for(auto i:mp)
        {
            v.push_back({i.second,i.first});
        }
        
        sort(v.rbegin(),v.rend());
        
        vector<int> ans;
        
        int i=0;
        
        while(k>0)
        {
            ans.push_back(v[i][1]);
            i++;
            k--;
        }
        
        return ans;
    }
};