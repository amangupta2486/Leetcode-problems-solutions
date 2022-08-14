class Solution {
public:
    int ladderLength(string a, string b, vector<string>& w) {
        
        unordered_set<string> mp;
        
        for(auto i:w)
        {
            mp.insert(i);
        }
        
        if(mp.count(b)==0)
        {
            return 0;
        }
        
        queue<pair<string,int>> q;
        
        q.push({a,1});
        
        while(!q.empty())
        {
            int l=q.size();
            
            while(l--)
            {
                auto p=q.front();
                q.pop();
                
                string s=p.first;
                int c= p.second;
                
                if(s==b)
                {
                    return c;
                }
                
                for(int i=0;i<s.size();i++)
                {
                    string d=s;
                    
                    for(int j=0;j<26;j++)
                    {
                        d[i]=j+'a';
                        
                        if(mp.find(d)!=mp.end())
                        {
                            mp.erase(d);
                            q.push({d,c+1});
                        }
                    }
                }
            }
        }
        
        return 0;
    }
};