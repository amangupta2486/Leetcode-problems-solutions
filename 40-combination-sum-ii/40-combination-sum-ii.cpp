class Solution {
public:
    vector<vector<int>> ans;

    
    void solve(vector<int> v,int i,int s,int n,vector<int> &c,int t,map<int,int> &mp)
    {
        if(i==n || s==t)
        {
            if(s==t)
            {
                ans.push_back(v);
            }
            return;
        }
        
        if(s+c[i]<=t && mp[c[i]]>0)
        {
            mp[c[i]]--;
            v.push_back(c[i]);
            
            if(mp[c[i]]==0)
            solve(v,i+1,s+c[i],n,c,t,mp);
            
            else if(mp[c[i]]>0)
            solve(v,i,s+c[i],n,c,t,mp);
            
            mp[c[i]]++;
            v.pop_back();
        }
        
        solve(v,i+1,s,n,c,t,mp);
    }
    vector<vector<int>> combinationSum2(vector<int>& c, int t) {
        
       int n=c.size();
        vector<int> v;
        //sort(c.begin(),c.end());
        vector<int> b;
        map<int,int> mp;
        for(auto i:c)
        {
            mp[i]++;
        }
        for(auto i:mp)
        {
            b.push_back(i.first);
        }
        solve(v,0,0,b.size(),b,t,mp);
        return ans;
    }
};