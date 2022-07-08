class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) {
        
        vector<vector<int>> merge;
        
        sort(in.begin(),in.end());
        
        for(auto x: in)
        {
            if(merge.empty() || merge.back()[1]<x[0])
            {
                merge.push_back(x);
            }
            else
            {
                merge.back()[1]=max(merge.back()[1],x[1]);
            }
        }
        
        return merge;
    }
};