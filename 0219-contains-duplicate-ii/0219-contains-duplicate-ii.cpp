class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& a, int k) {
        
        int n=a.size();
        
        unordered_map<int,vector<int>> mp;
        
        for(int i=0;i<n;i++)
        {
            mp[a[i]].push_back(i);
        }
        
        for(auto x:mp)
        {
            auto v=x.second;
            int p=v[0];
            
            for(int i=1;i<v.size();i++)
            {
                if(v[i]-p<=k)
                {
                    return 1;
                }
                p=v[i];
            }
        }
        
        return 0;
        
        return 0;
    }
};