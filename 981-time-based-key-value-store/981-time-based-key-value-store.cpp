#define pp pair<string,int>

class TimeMap {
public:
    
    unordered_map<string,vector<pair<string,int>>> mp;
    
    TimeMap() {
        mp.clear();
    }
    
    void set(string key, string value, int timestamp) {
        
        mp[key].push_back({value,timestamp});
        
    }
    
    string get(string key, int timestamp) {
        
        int time=0;
        string ans="";
        int n=mp[key].size();
        int i=0,j=n-1;
        
        while(i<=j)
        {
            int m=(j-i)/2 + i;
            
            if(mp[key][m].second>timestamp)
            {
                j=m-1;
            }
            else
            {
                i=m+1;
            }
        }
        
        if(i==0)
            return "";
        
        return mp[key][i-1].first;
        
        /*
        for(auto i:mp[key])
        {
            int t=i.second;
            
            if(t<=timestamp && t>=time)
            {
              time=t;
              ans=i.first;
            }
        }
        
        return ans;
        */
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */