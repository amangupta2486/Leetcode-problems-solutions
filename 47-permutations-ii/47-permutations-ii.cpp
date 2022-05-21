class Solution {
public:
    vector<vector<int>> ans;
    map<int,int> mp;
    
    void solve(vector<int>& a,vector<int> v,int n)
    {
        if(v.size()==n)
        {
           ans.push_back(v);            
           return;
        }
        
        for(auto j:mp)
        {
            int num=j.first;
            int c=j.second;
            
            if(c==0)
            {
                continue;
            }
            
            v.push_back(num);
            mp[num]--;
            solve(a,v,n);
            mp[num]++;
            v.pop_back();
        }
    }
    
    vector<vector<int>> permuteUnique(vector<int>& a) {
        
        int n=a.size();
        
        for(auto i:a)
        {
            mp[i]++;
        }
        vector<int> v;
        
        solve(a,v,n);
        
        return ans;
    }
};