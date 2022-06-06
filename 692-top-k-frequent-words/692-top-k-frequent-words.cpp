class Solution {
public:
    vector<string> topKFrequent(vector<string>& w, int k) {
        
        int n=w.size();
        
        map<string,int> mp;
        
        for(auto i:w)
        {
            mp[i]++;
        }
        
        vector<pair<int,string>> v;
        
        for(auto i:mp)
        {
            v.push_back({i.second,i.first});
        }
        
       // sort(v.rbegin(),v.rend());
        
        sort(v.begin(),v.end(),[&](auto &a,auto &b){
            return a.first>b.first || (a.first==b.first && a.second<b.second);
        });
        
        vector<string> ans;
        
        for(int i=0;i<k;i++)
        {
            ans.push_back(v[i].second);
        }
        
        return ans;
    }
};