class Solution {
public:
    vector<int> topKFrequent(vector<int>& a, int k) {
        
        unordered_map<int,int> mp;
        
        for(auto i:a)
        {
            mp[i]++;
        }
        
        priority_queue<pair<int,int>> pq;
        
        for(auto i:mp)
        {
            pq.push({i.second,i.first});
        }
        
        vector<int> ans;
        
        while(k>0)
        {
            auto v=pq.top();
            pq.pop();
            ans.push_back(v.second);
            k--;
        }
        
        return ans;
    }
};