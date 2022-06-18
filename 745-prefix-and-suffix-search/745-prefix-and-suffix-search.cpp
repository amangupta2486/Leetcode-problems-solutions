class WordFilter {
public:
    unordered_map<string,int> mp;
    
    WordFilter(vector<string>& w) {
        
        int n=w.size();
        
        for(int i=0;i<n;i++)
        {
            string x=w[i];
            int m=x.size();
            
            for(int j=1;j<=m;j++)
            {
                string p=x.substr(0,j);
                
                for(int k=0;k<m;k++)
                {
                    string s=x.substr(k,m);
                    
                    mp[p+"|"+s]=i+1;
                }
            }
        }
    }
    
    int f(string p, string s) {
        
        return mp[p+"|"+s]-1;
    }
};

/**
 * Your WordFilter object will be instantiated and called as such:
 * WordFilter* obj = new WordFilter(words);
 * int param_1 = obj->f(prefix,suffix);
 */