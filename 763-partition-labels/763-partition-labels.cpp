class Solution {
public:
    vector<int> partitionLabels(string s) {
        
        int n=s.size();
        
        vector<int> v;
        map<char,vector<int>> mp;
        int j=0;
        
        for(int i=0;i<n;i++)
        {
            mp[s[i]].push_back(i);
        }
        
        vector<vector<int>> p,ans;
        
        for(auto i:mp)
        {
            auto x=i.second;
            int m=x.size();
            
            p.push_back({x[0],x[m-1]});
        }
        
        sort(p.begin(),p.end());
        
        for(auto i:p)
        {
            if(ans.empty() || ans.back()[1]<i[0])
            {
                ans.push_back(i);
            }
            else
            {
                ans.back()[1]=max(ans.back()[1],i[1]);
            }
        }
        
        vector<int> b;
        
        for(auto i:ans)
        {
            b.push_back(i[1]-i[0]+1);
        }
        
        return b;
    }
};