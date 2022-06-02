class StockSpanner {
public:
    
    vector<int> v;
    stack<int> s;
    int i;
    StockSpanner() {
        i=0;
        v.clear();    
    }
    
    int next(int p) {
        
        int q=0;
        
        while(!s.empty() && v[s.top()]<=p)
        {
            s.pop();
        }
        if(s.empty())
        {
            q=i+1;
        }
        else
        {
            q=i-s.top();
        }
        
        s.push(i);
        i++;
        v.push_back(p);
        
        return q;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */