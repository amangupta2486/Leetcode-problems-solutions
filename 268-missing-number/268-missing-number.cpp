class Solution {
public:
    int missingNumber(vector<int>& a) {
        
        int n=a.size();
        
        map<int,int> mp;
        
        for(int i=0;i<n;i++)
            mp[a[i]]++;
        
        for(int i=0;i<n;i++)
        {
           if(mp[i]==0)
               return i;
        }
        
        return n;
    }
};