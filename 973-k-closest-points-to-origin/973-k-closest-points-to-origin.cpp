class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& p, int k) {
        
        vector<vector<int>> ans;
        
        priority_queue<pair<int,vector<int>>> v;
        
        for(auto i:p)
        {
            int x=(i[0]*i[0])+(i[1]*i[1]);
            
            v.push({x,i});
            
            if(v.size()>k)
            {
                v.pop();
            }
        }
        
       // sort(v.begin(),v.end());
            
        while(k--)
        {
            auto p=v.top();
            v.pop();
            //cout<<p.first<<" ";
            vector<int> q=p.second;
            
            ans.push_back({q[0],q[1]});
        }
        
        return ans;
    }
};