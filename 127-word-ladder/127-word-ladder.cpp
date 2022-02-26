class Solution {
public:
    int ladderLength(string b, string e, vector<string>& w) {
        
       // map<string,int> m;
        
        set<string> m;
        
        int n=w.size();
        
        for(int i=0;i<n;i++)
        {
            //m[w[i]]++;
            
            m.insert(w[i]);
            
        }
        
        queue<pair<string,int>> q;
        
        q.push({b,1});
        
        while(!q.empty())
        {
            auto p = q.front();
            q.pop();
            
            string a=p.first;
            int c=p.second;
            
            if(a==e)
            {
                return c;
            }
            
            for(int i=0;i<a.size();i++)
            {
                string d = a;
                
                for(int j=0;j<26;j++)
                {
                    d[i] = 'a'+j;
                    
                    if(m.find(d)!=m.end())
                    {
                        m.erase(d);
                        q.push({d,c+1});
                    }
                }
            }
        }
        
        return 0;
    }
};