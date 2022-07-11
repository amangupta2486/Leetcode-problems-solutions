class MedianFinder {
public:
    
    priority_queue<int> pq1;
    priority_queue<int,vector<int>,greater<int>> pq2;
    
    int n;
    
    MedianFinder() {
        n=0;  
    }
    
    void addNum(int num) {
        
        if(pq1.empty())
        {
            pq1.push(num);
            n++;
            return ;
        }
        
         n++;
        
        if(pq1.top()>=num)
        {
            pq1.push(num);
        }
        else
        {
            pq2.push(num);
        }
        
        int x=pq1.size();
        int y=pq2.size();
        
        
        if(n%2==0)
        {
            if(x>y)
            {
                pq2.push(pq1.top());
                pq1.pop();
            }
            
            if(y>x)
            {
                pq1.push(pq2.top());
                pq2.pop();
            }
        }
        
        else
        {
            if(x<y)
            {
                pq1.push(pq2.top());
                pq2.pop();
            }   
        }
        
    }
    
    double findMedian() {
        
        double x;
        
        if(n%2==0)
        {
            x=(pq1.top()+pq2.top())/2.0;
        }
        else
        {
            x=pq1.top();
        }
        
        return x;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */