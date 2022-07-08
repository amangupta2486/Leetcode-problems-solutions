class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        
        map<char,int> mp;
        
        int mx=0;
        
        int m=tasks.size();
        
        for(auto i:tasks)
        {
            mp[i]++;
            
            mx=max(mx,mp[i]);
        }
        
        int cnt=0;
        
        for(auto i:mp)
        {
            if(i.second==mx)
            {
                cnt++;
            }
        }
        
        int time=(mx-1)*n + mx;
        
        int ans=time+(cnt-1);
        
        return max(ans,m);
    }
};