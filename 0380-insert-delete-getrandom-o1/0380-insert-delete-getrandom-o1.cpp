class RandomizedSet {
public:
    
    unordered_map<int,int> mp;
    vector<int> v;
    
    int i=0;
    
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        
        if(mp.find(val)!=mp.end())
        {
            return false;
        }
        
        mp[val]=v.size();
        v.push_back(val);

        return true;
    }
    
    bool remove(int val) {
        
        if(mp.find(val)==mp.end())
        {
            return false;
        }
        
        int idx=mp[val];

        v[idx]=v.back();
        
        v.pop_back();

        mp[v[idx]]=idx;
        mp.erase(val);
        
        return true;
    }
    
    int getRandom() {
        
        int n=v.size();
        
        return v[rand()%n];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */