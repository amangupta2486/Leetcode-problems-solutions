class Solution {
public:
    int findDuplicate(vector<int>& a) {
        
        int n=a.size();
        
        map<int,int> mp;
        
        for(int i=0;i<n;i++)
        {
            mp[a[i]]++;
            
            if(mp[a[i]]>1)
            {
                return a[i];
            }
        }
        
        return 0;
    }
};