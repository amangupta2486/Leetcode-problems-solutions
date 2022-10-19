class Solution {
public:
    vector<string> topKFrequent(vector<string>& w, int k) {
        
        unordered_map<string,int> mp;
        
        for(auto x:w)
        {
            mp[x]++;
        }
        
        vector<pair<int,string>> p;
        
        for(auto x:mp)
        {
            p.push_back({x.second,x.first});
        }
        
        sort(p.begin(),p.end(),[&](auto &a,auto &b){
            
            if(a.first==b.first)
            {
                return a.second<b.second;
            }
            
            return a.first>b.first;
        });
        
        vector<string> ans;
        
        for(int i=0;i<k;i++)
        {
            ans.push_back(p[i].second);
        }
        
        return ans;
    }
};