class FreqStack {
public:
    
    map<int,int> f;
    map<int,stack<int>> s;
    int mx=0;
    
    FreqStack() {
        f.clear();
        s.clear();
        mx=0;
    }
    
    void push(int a) {
        f[a]++;
        
        mx=max(mx,f[a]);
        
        s[f[a]].push(a);
    }
    
    int pop() {
        
        int p = s[mx].top();
        
        f[p]--;
        s[mx].pop();
        
        if(s[mx].empty())
        {
            s.erase(mx);
            mx--;
        }
        
        return p;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */