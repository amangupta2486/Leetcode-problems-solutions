class Solution {
public:
    int kthSmallest(vector<vector<int>>& g, int k) {
        
        int n=g.size();
        
        priority_queue<int,vector<int>,greater<int>> q;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                q.push({g[i][j]});
            }
        }
        
        while(q.size()>(n*n)-k+1)
        {
            //cout<<q.top()<<" ";
            q.pop();
        }
        
        cout<<endl;
        
        return q.top();
    }
};