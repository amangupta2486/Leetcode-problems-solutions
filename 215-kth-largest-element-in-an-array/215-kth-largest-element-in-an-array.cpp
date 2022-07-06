class Solution {
public:
    int findKthLargest(vector<int>& a, int k) {
        
        priority_queue<int,vector<int>,greater<int>> q;
        
        int n=a.size();
        
        for(int i=0;i<n;i++)
        {
            q.push(a[i]);
            
            if(q.size()>k)
            {
                q.pop();
            }
        }

        return q.top();
    }
};