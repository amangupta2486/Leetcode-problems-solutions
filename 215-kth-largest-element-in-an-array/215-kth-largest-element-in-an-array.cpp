class Solution {
public:
    int findKthLargest(vector<int>& a, int k) {
        
        int n=a.size();
        
        priority_queue<int> q;
        
        for(int i=0;i<n;i++)
        {
            q.push(-1*a[i]);
            
            if(q.size()>k)
            {
                q.pop();
            }
        }
        
        return -1*q.top();
       
    }
};