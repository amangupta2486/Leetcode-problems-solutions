class Solution {
public:
    string frequencySort(string s) {
        
        int n=s.size();
        map<char,int> mp;
        
        for(auto x:s)
        {
            mp[x]++;
        }
        
        vector<pair<int,char>> v;
        
        for(auto x:mp)
        {
            v.push_back({x.second,x.first});
        }
        
        sort(v.rbegin(),v.rend());
        
        string ans="";
        
        for(auto x:v)
        {
            int c=x.first;
            
            while(c>0)
            {
                ans+=x.second;
                c--;
            }
        }
        
        return ans;
    }
};