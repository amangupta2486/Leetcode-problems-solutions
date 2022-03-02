class Solution {
public:
    
    int numMatchingSubseq(string s, vector<string>& w) {
        
        map<char,vector<string>> mp;
        
        int n=s.size();
        int m=w.size();
        
        sort(w.begin(),w.end());
        
        for(auto i:w)
        {
            mp[i[0]].push_back(i);
        }
        
        int c=0;
        
        
        for(int i=0;i<n;i++)
        {
            char d=s[i];
            
            auto q = mp[d];
            mp[d].clear();
            
            for(int k=0;k<q.size();k++)
            {
                string b = q[k].substr(1);
                
                if(b=="")
                {
                    c++;
                }
                    
                else
                mp[b[0]].push_back(b);
            }
        }
        
        return c;
    }
};