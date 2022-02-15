class Solution {
public:
    int singleNumber(vector<int>& a) {
        
        int n=a.size();
        
        unordered_map<int,int> m;
        
        for(auto i:a)
        {
            m[i]++;
        }
        
        for(auto i:m)
        {
            if(i.second==1)
            {
                return i.first;
            }
        }
        
        return 0;
    }
};