class KthLargest {
public:
    
    priority_queue<int> q;
    int m;
    
    KthLargest(int k, vector<int>& a) {
        
        m=k;
        
        while(!q.empty())
            q.pop();
        
        int n=a.size();
        
        for(int i=0;i<n;i++)
        {
            q.push(a[i]*-1);
            
            if(q.size()>k)
            {
                q.pop();
            }
        }
    }
    
    int add(int val) {
        
        q.push(-1*val);
        
        if(q.size()>m)
        {
            q.pop();
        }
        
        return -1*q.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */