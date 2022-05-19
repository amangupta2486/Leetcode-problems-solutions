class StockSpanner {
public:
    
    stack<int> s;
    vector<int> a;
    
    int i=0;
    
    StockSpanner() {
        i=0;
    }
    
    int next(int p) {
        
        int b;
        
        while(!s.empty() && a[s.top()]<=p)
        {
            s.pop();
        }
        
        if(s.empty())
        {
            b=i+1;
        }
        else
        {
            b=i-s.top();
        }
        
        s.push(i);
        a.push_back(p);
        i++;
        return b;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */