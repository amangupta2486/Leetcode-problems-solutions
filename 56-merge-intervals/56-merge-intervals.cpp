class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& i) {
        
        vector<vector<int>> ans;
        
        sort(i.begin(),i.end());
        
        for(auto j:i)
        {
            if(ans.empty() || ans.back()[1]<j[0])
            {
                ans.push_back(j);
            }
            else
            {
                ans.back()[1]=max(ans.back()[1],j[1]);
            }
        }
        
        return ans;
    }
};