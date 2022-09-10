class Solution {
public:
    int numSubarraysWithSum(vector<int>& a, int goal) {
        
        int n=a.size();
        
        int s=0;
        map<int,int> mp;
        
        int ans=0;
        
        for(int i=0;i<n;i++)
        {
            s+=a[i];
            
            if(s==goal)
            {
                ans++;
            }
            
            if(mp[s-goal]>0)
            {
                ans+=mp[s-goal];
            }
            
            mp[s]++;
        }
        
        return ans;
    }
};