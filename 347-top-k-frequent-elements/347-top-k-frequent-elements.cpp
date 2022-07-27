class Solution {
public:
    vector<int> topKFrequent(vector<int>& a, int k) {
        
        unordered_map<int,int> mp;
        
        for(auto i:a)
        {
            mp[i]++;
        }
        
        vector<vector<int>> v;
        
        for(auto i:mp)
        {
            v.push_back({i.second,i.first});
        }
        
        sort(v.begin(),v.end(),[&](auto a,auto b){
            return a[0]>b[0];
        });
        
        vector<int> ans;
        
        for(int i=0;i<k;i++)
        {
            ans.push_back(v[i][1]);
        }
        
        return ans;
    }
};