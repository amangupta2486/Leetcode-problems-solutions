class StockSpanner {
public:
    
    stack<int> s;
    int i=0;
    vector<int> v;
    
    StockSpanner() {
        
    }
    
    int next(int p) {
        
        int x=0;
        
        while(!s.empty() && v[s.top()]<=p)
        {
            s.pop();
        }
        
        if(s.empty())
        {
            x=i+1;
        }
        else
        {
            x=i-s.top();
        }
        
        v.push_back(p);
        s.push(i);
        i++;
        
        return x;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */