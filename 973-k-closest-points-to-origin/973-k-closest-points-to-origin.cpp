class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        priority_queue<pair<int,int>> q;
        
        int n=points.size();
        
        for(int i=0;i<n;i++)
        {
            int d=(points[i][0]*points[i][0])+(points[i][1]*points[i][1]);
            
            q.push({d,i});
            
            if(q.size()>k)
            {
                q.pop();
            }
        }
        
        vector<vector<int>> ans;
        
        while(!q.empty())
        {
            auto p=q.top();
            q.pop();
            ans.push_back(points[p.second]);
        }
        
        return ans;
    }
};