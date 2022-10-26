class Solution {
public:
    bool checkSubarraySum(vector<int>& a, int k) {
        
        int n=a.size();
        
        if(n<2)
        {
            return 0;
        }
        
        int s=0;
        unordered_map<int,int> mp;
        
        mp[0]=0;
        
        for(int i=0;i<n;i++)
        {
            s+=a[i];
            
            int d=s%k;
            
            if(mp.find(d)==mp.end())
            {
                mp[d]=i+1;
                continue;
            }

            else if(mp[d]<i)
            {
                return 1;
            }
        }
        
        return 0;
    }
};