class MyCalendar {
public:
    
    vector<vector<int>> v;
    
    MyCalendar() {
        v.clear();    
    }
    
    bool book(int start, int end) {
        
        if(v.empty())
        {
            v.push_back({start,end-1});
            return 1;
        }
        
        int f=0;
        
        if(end-1<v[0][0])
        {
            f=1;
            vector<int> b;
            b.push_back(start);
            b.push_back(end-1);
            v.insert(v.begin(),b);
            
            return 1;
        }
        
        for(int i=0;i<v.size()-1;i++)
        {
            if(v[i][1]<start && end-1<v[i+1][0])
            {
                f=1;
                vector<int> b;
                b.push_back(start);
                b.push_back(end-1);
                v.insert(v.begin()+i+1,b);
                break;
            }
        }
        
        if(f==0)
        {
            if(v[v.size()-1][1]<start)
            {
                f=1;
                v.push_back({start,end-1});
            }
        }
        
        return f;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */