class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        unordered_map<string,int> mp;
        
        for(auto x:words)
        {
            mp[x]++;
        }
        
        vector<pair<int,string>> v;
        
        for(auto x:mp)
        {
            v.push_back({x.second,x.first});
        }
        
        sort(v.begin(),v.end(),[&](auto &a,auto &b){
            
            if(a.first==b.first)
            {
                return a.second<b.second;
            }
            
            return a.first>b.first;
        });
        
        vector<string> ans;
        
        for(int i=0;i<k;i++)
        {
            ans.push_back(v[i].second);
        }
        
        return ans;
    }
};