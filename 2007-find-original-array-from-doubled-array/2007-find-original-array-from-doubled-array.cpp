class Solution {
public:
    vector<int> findOriginalArray(vector<int>& a) {
        
        int n=a.size();
        
        if(n%2==1)
        {
            return {};
        }
        
        map<int,int> mp;
        
        for(auto x:a)
        {
            mp[x]++;
        }

        vector<int> v;
        
        sort(a.begin(),a.end());
        
        for(int i=0;i<n;i++)
        {
            int x=a[i];
            
           // cout<<x<<" ";
            
            if(mp[x]==0)
            {
                continue;
            }
            
            if(x*2==x && mp[x]<2)
            {
                return {};
            }
            
            if(mp[x*2]>0)
            {
                v.push_back(x);
                mp[x]--;
                mp[x*2]--;
            }
            
            else
            {
                return {};
            }
        }
        
        return v;
    }
};