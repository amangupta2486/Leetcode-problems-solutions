class Solution {
public:
    vector<int> partitionLabels(string s) {
        
        int n=s.size();
        
        map<char,vector<int>> mp;
        
        for(int i=0;i<n;i++)
        {
            mp[s[i]].push_back(i);
        }
        
        vector<vector<int>> p;
        
        for(auto x:mp)
        {
            auto v=x.second;
            int m=v.size();
            
            p.push_back({v[0],v[m-1]});
            
            //cout<<v[0]<<","<<v[m-1]<<" ";
        }
        
        sort(p.begin(),p.end());
        
        vector<vector<int>> q;
        
        for(auto x:p)
        {
            if(q.empty() || q.back()[1]<x[0])
            {
                q.push_back(x);
            }
            else
            {
                q.back()[1]=max(q.back()[1],x[1]);
            }
        }
        
        vector<int> ans;
        
        for(auto x:q)
        {
            ans.push_back(x[1]-x[0]+1);
        }
        
        return ans;
    }
};