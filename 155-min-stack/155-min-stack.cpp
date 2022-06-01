
template<typename T>
class custom_priority_queue : public std::priority_queue<T, std::vector<T>,greater<T>>
{
  public:

      bool remove(const T& value) {
        auto it = std::find(this->c.begin(), this->c.end(), value);
        if (it != this->c.end()) {
            this->c.erase(it);
            std::make_heap(this->c.begin(), this->c.end(), this->comp);
            return true;
       }
       else {
        return false;
       }
 }
};

class MinStack {
public:

    custom_priority_queue<int> p;
    stack<int> s;
    
    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);
        p.push(val);
    }
    
    void pop() {
        int a=s.top();
        p.remove(a);
        
        s.pop();

    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return p.top();
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