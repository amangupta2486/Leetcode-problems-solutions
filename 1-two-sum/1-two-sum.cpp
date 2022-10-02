class Solution {
public:
    vector<int> twoSum(vector<int>& a, int t) {
        
        int n=a.size();
        
        map<int,int> mp;
        
        for(int i=0;i<n;i++)
        {
            if(mp[t-a[i]]>0)
            {
                return {mp[t-a[i]]-1,i};
            }
            
            mp[a[i]]=i+1;
        }
        
        return {};
    }
};