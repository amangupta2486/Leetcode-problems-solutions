class MinStack {
public:
    
    stack<pair<int,int>> s;
    
    MinStack() {
        
    }
    
    void push(int val) {
        
        if(s.empty())
        {
            s.push({val,val});
        }
        else
        {
            int mi=min(s.top().first,val);
            
            s.push({mi,val});
        }
    }
    
    void pop() {
        
        s.pop();
    }
    
    int top() {
        
        return s.top().second;
    }
    
    int getMin() {
        
        return s.top().first;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */