class Solution {
public:
    vector<int> twoSum(vector<int>& a, int t) {
        
        int n=a.size();
        map<int,int> mp;
        
        for(int i=0;i<n;i++)
        {
            if(mp.find(t-a[i])!=mp.end())
            {
                return {mp[t-a[i]]+1,i+1};
            }
            
            mp[a[i]]=i;
        }
        
        return {};
    }
};