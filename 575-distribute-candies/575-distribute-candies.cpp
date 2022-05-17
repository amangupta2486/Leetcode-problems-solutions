class Solution {
public:
    int distributeCandies(vector<int>& a) {
        
        int n=a.size();
        // map<int,int> mp;
        unordered_set<int> s;
        
        for(auto i:a)
        {
            s.insert(i);
        }
        
        int m=s.size();
        
        if(m>=n/2)
        {
            return n/2;
        }
        
        return m;
    }
};