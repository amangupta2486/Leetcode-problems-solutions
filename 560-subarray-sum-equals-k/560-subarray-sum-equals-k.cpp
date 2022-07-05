class Solution {
public:
    int subarraySum(vector<int>& a, int k) {
        
        int n=a.size();
        
        vector<int> p(n+1,0);
        
        for(int i=1;i<=n;i++)
        {
            p[i]=p[i-1]+a[i-1];
        }
        
        int cnt=0;
        
        unordered_map<int,int> mp;
        
        for(int i=1;i<=n;i++)
        {
            int x=p[i]-k;
            
            if(p[i]==k)
            {
                cnt++;
            }
            
            if(mp[x]>0)
            {
                cnt+=mp[x];
            }
            
            mp[p[i]]++;
        }
        
        return cnt;
    }
};