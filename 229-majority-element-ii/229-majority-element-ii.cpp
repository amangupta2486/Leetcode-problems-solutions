class Solution {
public:
    vector<int> majorityElement(vector<int>& a) {
        
        int n=a.size();
        
        unordered_map<int,int> mp;
        
        for(int i=0;i<n;i++)
        {
            mp[a[i]]++;
        }
        
        vector<int> v;
        
        for(auto i:mp)
        {
            int x=i.second;
            
            if(x>n/3)
            {
                v.push_back(i.first);
            }
        }
        
        return v;
  }
};