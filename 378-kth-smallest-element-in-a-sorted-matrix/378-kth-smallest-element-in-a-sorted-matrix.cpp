class Solution {
public:
    int kthSmallest(vector<vector<int>>& g, int k) {
        
        int n=g.size();
        int m=g[0].size();
        
        priority_queue<int> q;
        
        int h=n-k;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                q.push(g[i][j]);
            }
        }
        
        while(q.size()>k)
        {
            q.pop();
        }
        
        return q.top();
    }
};