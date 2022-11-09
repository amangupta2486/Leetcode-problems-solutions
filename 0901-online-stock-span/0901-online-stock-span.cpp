class StockSpanner {
public:
    
    stack<int> s;
    vector<int> v;
    int i=0;
    
    StockSpanner() {
        
    }
    
    int next(int p) {
        
        while(!s.empty() && v.size()>0 && v[s.top()]<=p )
        {
            s.pop();
        }
        
        
        int d=i+1;
        
        if(!s.empty())
        d=i-s.top();
        
        v.push_back(p);
        s.push(i);
        
        i++;
        
        return d;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */