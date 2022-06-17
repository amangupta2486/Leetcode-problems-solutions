class MinStack {
public:
    stack<pair<int,int>> s;

    MinStack() {
        
    }
    
    void push(int val) {
        
        int min;
        if(s.empty())
        {
            min=val;
        }
        else
        {
            min=std::min(s.top().second,val);
        }
        
        s.push({val,min});
    }
    
    void pop() {
        s.pop();
    }
    
    int top() {
        auto p=s.top();

        return p.first;
    }
    
    int getMin() {
        auto p=s.top();
         
        return p.second;
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