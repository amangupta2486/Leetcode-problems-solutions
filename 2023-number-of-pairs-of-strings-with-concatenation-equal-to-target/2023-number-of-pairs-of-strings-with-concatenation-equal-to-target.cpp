class Solution {
public:
    int numOfPairs(vector<string>& a, string t) {
        
        unordered_map<string,int> mp;
        
        for(auto x:a)
        {
            mp[x]++;
        }
        
        string s="";
        string x=t;
        
        int ans=0;
        
        for(int i=0;i<t.size();i++)
        {
            s+=t[i];
            x.erase(0,1);
            
            if(s==x)
            {
                ans+= mp[s]*(mp[s]-1);
            }
            
            else if(mp[s]>0  && mp[x]>0)
            {
                ans+= mp[s]*mp[x];
            }
        }
        
        return ans;
    }
};