class StockSpanner {
public:
    
    stack<int> s;
    
    int v[100005];
    
    int i=0;
    
    StockSpanner() {
        
        memset(v,0,sizeof(v));
    }
    
    int next(int p) {
        
        while(!s.empty() && v[s.top()]<=p)
        {
            s.pop();
        }
        
        if(s.empty())
        {
            s.push(i);
            v[i]=p;
            i++;
            
            return i;
        }
        
        v[i]=p;
        int x=i-s.top();
        
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