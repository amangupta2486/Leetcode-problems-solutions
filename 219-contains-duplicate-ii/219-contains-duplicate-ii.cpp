class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& a, int k) {
        
        int n=a.size();
        
        unordered_map<int,int> mp;
        
        for(int i=0;i<n;i++)
        {
            // for(int j=i+1;j<n;j++)
            // {
            //     if(abs(i-j)<=k && a[i]==a[j])
            //     {
            //         return 1;
            //     }
            // }
            
            if(mp.find(a[i])!=mp.end())
            {
                int j=mp[a[i]];
                
                //cout<<i<<" "<<j<<endl;
                if(i-j<=k)
                {
                    return 1;
                }
                
                else
                {
                    mp[a[i]]=i;
                }
            }
            
            else
            {
                mp[a[i]]=i;
            }
        }
        
        return 0;
    }
};