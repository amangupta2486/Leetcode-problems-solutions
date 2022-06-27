class Solution {
public:
    int minSetSize(vector<int>& a) {
        
        int n=a.size();
        
        map<int,int> mp;
        
        for(auto i:a)
        {
            mp[i]++;
        }
        
        vector<int> v;
        
        for(auto i:mp)
        {
            v.push_back(i.second);
        }
        
        sort(v.rbegin(),v.rend());
        
        int m=n/2;
        
        int s=0,ans=0;
        for(auto i:v)
        {
            if(s+i<m)
            {
                s+=i;
                ans++;
            }
            else
            {
                ans++;
                break;
            }
        }
        
        return ans;
    }
};