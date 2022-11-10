class MapSum {
public:
    
    unordered_map<string,int> mp;
    
    MapSum() {
        mp.clear();
    }
    
    void insert(string key, int val) {
        
        mp[key]=val;
    }
    
    int sum(string p) {
        
        int ans=0;
        
        for(auto x:mp)
        {
            string s=x.first;
            int val=x.second;
            
            string b=s.substr(0,p.size());
            
            if(b==p)
            {
                ans+=val;
            }
        }
        
        return ans;
    }
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */