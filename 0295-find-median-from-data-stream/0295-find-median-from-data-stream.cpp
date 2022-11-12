class MedianFinder {
public:
    
    priority_queue<double> pq;
     priority_queue<double,vector<double>,greater<double>> pq1;
    
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        
        if(pq.empty())
        {
            pq.push(num);
        }
        
        else
        {
            if(num>pq.top())
            {
                pq1.push(num);
                
                int n=pq.size();
                int m=pq1.size();
                
                if(pq1.size()>pq.size())
                {
                    auto t=pq1.top();
                    pq1.pop();

                    pq.push(t);
                }
            }
            else
            {
                pq.push(num);
                
                int n=pq.size();
                int m=pq1.size();
                
                 if(pq1.size()<pq.size())
                {
                    auto t=pq.top();
                    pq.pop();

                    pq1.push(t);
                }
                
                if((n+m)%2!=0)
                {
                    auto t=pq1.top();
                    pq1.pop();

                    pq.push(t);
                }
            }
            
        }
        
    }
    
    double findMedian() {
        
        if(pq.size()>pq1.size())
        {
            return pq.top();
        }
        
        double ans=(pq.top()+pq1.top())/2.0;
        
        return ans;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */