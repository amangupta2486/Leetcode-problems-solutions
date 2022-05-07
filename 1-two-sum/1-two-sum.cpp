class Solution {
public:
    vector<int> twoSum(vector<int>& a, int t) {
        
        int n=a.size();
        
        map<int,int> mp;
        
        for(auto i:a)
        {
            mp[i]++;
        }
        
        vector<int>v;
        
        for(int i=0;i<n;i++)
        {
             if(a[i]*2==t && mp[a[i]]<2)
            {
                continue;
            }
            
            else if(mp[t-a[i]]>0)
            {
              v.push_back(i);
            }
        }
        
        return v;
    }
};