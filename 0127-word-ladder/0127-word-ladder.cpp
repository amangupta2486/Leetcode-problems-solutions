class Solution {
public:
    int ladderLength(string a, string b, vector<string>& w) {
        
        if(a==b)
        {
            return 0;
        }
        
        unordered_set<string> s;
        
        for(auto x:w)
        {
            s.insert(x);
        }
        
        if(s.find(b)==s.end())
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
                
                auto r=p.first;
                int  c=p.second;
                
                if(r==b)
                {
                    return c;
                }
                
                for(int i=0;i<r.size();i++)
                {
                    string d=r;
                    
                    for(int j=0;j<26;j++)
                    {
                        d[i]='a'+j;
                        
                        if(s.find(d)!=s.end())
                        {
                            q.push({d,c+1});
                            s.erase(d);
                        }
                    }
                }
            }
        }
        
        return 0;
    }
};