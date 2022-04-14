class Solution {
public:
    bool containsDuplicate(vector<int>& a) {
        
        int n=a.size();
        
        set<int> s;
        
        for(auto i:a)
        {
            if(s.count(i))
            {
                return 1;
            }
            s.insert(i);
        }
        
        return 0;
    }
};