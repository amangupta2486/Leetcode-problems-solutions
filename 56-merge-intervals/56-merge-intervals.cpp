class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) {
        
         vector<vector<int>> mr;
        
        sort(in.begin(),in.end());
        
        for(auto x:in)
        {
            if(mr.empty() || mr.back()[1]<x[0])
            {
                mr.push_back(x);
            }
            else
            {
                mr.back()[1]=max(mr.back()[1],x[1]);
            }
        }
        
        return mr;
    }
};