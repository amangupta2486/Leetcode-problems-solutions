class Solution {
public:
    int distributeCandies(vector<int>& a) {
        
        int n=a.size();
        map<int,int> mp;
        
        for(auto i:a)
        {
            mp[i]++;
        }
        
        int m=mp.size();
        
        if(m>=n/2)
        {
            return n/2;
        }
        
        return m;
    }
};