class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& a, int k) {
        
        vector<vector<int>> v;
        
        map<int,int> mp;
        
        for(auto i:a)
        {
            mp[i]++;
        }
        
        for(auto i:mp)
        {
            v.push_back({i.second,i.first});
        }
        
        sort(v.begin(),v.end());
        
        int i=0;
        int n=v.size();
        
        while(k>0 && i<n)
        {
            auto p=v[i];
            int x=p[0];
            
            if(x<=k)
            {
                k-=x;
                mp.erase(p[1]);
            }
            else
            {
                x-=k;
                k=0;
                mp[p[1]]=x;
            }
            i++;
        }
        
        return mp.size();
    }
};