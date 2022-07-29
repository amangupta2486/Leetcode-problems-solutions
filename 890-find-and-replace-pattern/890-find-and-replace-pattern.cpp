class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string p) {
       
        int n=p.size();
        
        map<char,vector<int>> mp;
        
        for(int i=0;i<n;i++)
        {
            mp[p[i]].push_back(i);
        }
        
     
        vector<string> ans;
        
        for(auto x:words)
        {
            map<char,vector<int>> mp1;
            
            for(int i=0;i<n;i++)
            {
                mp1[x[i]].push_back(i);
            }
            
            int f=1;
            
            for(int i=0;i<n;i++)
            {
                if(mp[p[i]]!=mp1[x[i]])
                {
                    f=0;
                    break;
                }
            }
            
            if(f)
            {
                ans.push_back(x);
            }
        }
        
        return ans;
    }
};