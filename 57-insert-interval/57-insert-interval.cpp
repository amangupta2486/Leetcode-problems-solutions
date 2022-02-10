class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& v, vector<int>& a) {
        
        vector<vector<int>> m;
        
        v.push_back(a);
        
        sort(v.begin(),v.end());
        
        for(auto i:v)
        {
            if(m.empty() || m.back()[1]<i[0])
            {
                m.push_back(i);
            }
            else
            {
                m.back()[1]=max(m.back()[1],i[1]);
            }
        }
        
        return m;
        
    }
};