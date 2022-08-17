class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& a, int k) {
        
        int n=a.size();
        
        unordered_map<int,int> mp;
        
        for(auto i:a)
        {
            mp[i]++;
        }
        
        vector<vector<int>> v;
        
        for(auto x:mp)
        {
            v.push_back({x.second,x.first});
        }
        
        sort(v.begin(),v.end());
        
        int m=v.size();
        
        for(int i=0;i<n && k>0;i++)
        {
            int c=v[i][0];
            
            if(c<=k)
            {
                k-=c;
                m--;
            }
            else
            {
                k=0;
                break;
            }
        }
        
        return m;
    }
};