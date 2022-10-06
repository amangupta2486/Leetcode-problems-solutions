class TimeMap {
public:
    
    map<string,vector<pair<int,string>>> mp;
    
    TimeMap() {
        mp.clear();
    }
    
    void set(string key, string value, int timestamp) {
        
        mp[key].push_back({timestamp,value});
    }
    
    string get(string key, int t){
        
        int i=0;
        int j=mp[key].size()-1;
        
        while(i<=j)
        {
            int m=(i+j)/2;
            
            if(mp[key][m].first>t)
            {
                j=m-1;
            }
            else
            {
                i=m+1;
            }
        }
        
        if(i==0)
        {
            return "";
        }
        
        return mp[key][i-1].second;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */