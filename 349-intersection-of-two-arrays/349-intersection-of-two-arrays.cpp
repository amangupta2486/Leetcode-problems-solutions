class Solution {
public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        
        int n=a.size();
        int m=b.size();
        
        unordered_set<int> s;
        
        for(auto i:a)
        {
            s.insert(i);
        }
        
        unordered_set<int> v;
        
        vector<int> ans;
        
        for(auto i:b)
        {
            if(s.find(i)!=s.end())
            {
                v.insert(i);
            }
        }
        
        for(auto i:v)
        {
            ans.push_back(i);
        }
        
        return ans;
    }
};