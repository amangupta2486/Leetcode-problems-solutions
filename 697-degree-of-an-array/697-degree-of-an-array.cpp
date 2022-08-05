class Solution {
public:
    int findShortestSubArray(vector<int>& a) {
        
        unordered_map<int,int> mp,mpstart,mpend;
        
        int n=a.size();
        
        int mx=0;
        
        for(int i=0;i<n;i++)
        {
            mp[a[i]]++;
            
            if(mpstart.find(a[i])==mp.end())
            {
                mpstart[a[i]]=i;
            }
            
            mpend[a[i]]=i;
            
            mx=max(mx,mp[a[i]]);
        }
        
        int ans=n;
        
        for(auto i:mp)
        {
            if(i.second==mx)
            {
                ans=min(ans,mpend[i.first]-mpstart[i.first]+1);
            }
        }
        
        return ans;
    }
};