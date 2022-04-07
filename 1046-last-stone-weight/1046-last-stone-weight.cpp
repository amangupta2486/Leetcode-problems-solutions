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
            int y=q.top();
            q.pop();
            int x=q.top();
            q.pop();
            
            if(y>x)
            {
                q.push(y-x);
            }
        }
        
        if(q.size()==0)
            return 0;
        
        return q.top();
    }
};