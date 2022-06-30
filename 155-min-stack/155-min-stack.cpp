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
            auto p=s.top();
            int mi=min(val,p.first);
            s.push({mi,val});
        }
    }
    
    void pop() {
        s.pop();
    }
    
    int top() {
        
        auto p=s.top();
        return p.second;
    }
    
    int getMin() {
        
        auto p=s.top();
        return p.first;
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