class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        
        map<int,int> w;
        map<int,int> l;
        
        for(auto x:matches)
        {
            w[x[0]]++;
            l[x[1]]++;
        }
        
        vector<int> b,a;
        unordered_set<int> s;
        
        for(auto x:l)
        {
            if(x.second==1)
            {
                b.push_back(x.first);
            }
            
            s.insert(x.first);
        }
        
        for(auto x:w)
        {
            int wi=x.first;
            
            if(s.find(wi)==s.end())
            {
                a.push_back(wi);
            }
        }
        
        return {a,b};
    }
};