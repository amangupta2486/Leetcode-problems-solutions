class Solution {
public:
    int countPairs(vector<int>& d) {
        
        int n=d.size();
        
        unordered_map<int,int> mp;

        long ans=0;
        
        vector<int> v;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<=21;j++)
            {
                long f=1<<j;
                
                if(mp[f-d[i]]>0)
                {
                    ans+=mp[f-d[i]];
                }
            }
            mp[d[i]]++;
        }
        
        return ans%(int)(1e9 +7);
    }
};