class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        
        int n=time.size();
        
        unordered_map<int,int> mp;
        
        int ans=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=1;j<=16;j++)
            {
                if(mp[(60*j)-time[i]]>0)
                {
                    ans+=mp[(60*j)-time[i]];
                }
            }
        
            mp[time[i]]++;
        }
        
        return ans;
    }
};