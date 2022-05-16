class Solution {
public:
    int findKthLargest(vector<int>& a, int k) {
        
        priority_queue<int> q;
        
        int n=a.size();
        
        for(int i=0;i<n;i++)
        {
            q.push(a[i]);
        }
        
        while(q.size()>n-k+1)
        {
            q.pop();
        }
        
        return q.top();
    }
};