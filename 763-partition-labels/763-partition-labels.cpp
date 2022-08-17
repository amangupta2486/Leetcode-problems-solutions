class Solution {
public:
    vector<int> partitionLabels(string s) {
        
        map<char,vector<int>> mp;
        
        int n=s.size();
        
        for(int i=0;i<n;i++)
        {
            int x=i,y=0;
        
            mp[s[i]].push_back(i);    
        }
        
        vector<vector<int>> v,p;
        
        for(int i=0;i<n;i++)
        {
            auto b=mp[s[i]];
            int m=b.size();
            
            v.push_back({b[0],b[m-1]});
        }
        
        
        for(auto x:v)
        {
            if(p.empty() || p.back()[1]<x[0])
            {
                p.push_back(x);
            }
            else
            {
                p.back()[1]=max(p.back()[1],x[1]);
            }
        }
        
        vector<int> ans;
        
        for(auto x:p)
        {
            ans.push_back(x[1]-x[0]+1);
        }
        
        return ans;
    }
};