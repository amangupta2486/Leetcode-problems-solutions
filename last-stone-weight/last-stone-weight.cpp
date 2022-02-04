class Solution {
public:
    int lastStoneWeight(vector<int>& a) {
        
        int n=a.size();
        
        priority_queue<int> q;
        
        for(int i=0;i<n;i++)
        {
            q.push(a[i]);
        }
        
        while(q.size()>1)
        {
            int a = q.top();q.pop();
            int b = q.top();q.pop();
            
            if(a==b)
            {
                continue;
            }
            
            q.push(a-b);
        }
        
        if(q.size()==1)
        {
            return q.top();
        }
        
        return 0;
    }
};