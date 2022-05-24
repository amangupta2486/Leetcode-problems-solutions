class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& p, int k) {
        
        vector<vector<int>> ans;
        
        vector<vector<int>> v;
        
        for(auto i:p)
        {
            int x=(i[0]*i[0])+(i[1]*i[1]);
            
            v.push_back({x,i[0],i[1]});
        }
        
        sort(v.begin(),v.end());
        
        for(int i=0;i<k;i++)
        {
            ans.push_back({v[i][1],v[i][2]});
        }
        
        return ans;
    }
};