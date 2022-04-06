class Solution {
public:
    int ladderLength(string s, string t, vector<string>& w) {
        
        queue<pair<string,int>> q;
        
        q.push({s,0});
        
        set<string> mp;
        
        for(auto i:w)
            mp.insert(i);
        
        int ans=INT_MAX;
        
        while(!q.empty())
        {
            auto p=q.front();
            q.pop();
            
            string b=p.first;
            int c= p.second;
            
            c++;
                
            if(b==t)
            {
                ans=min(ans,c);
            }
            
            for(int i=0;i<b.size();i++)
            {
                string d=b;
                
                for(int j=0;j<26;j++)
                {
                    d[i]='a'+j;
                    
                    
                    if(mp.count(d))
                    {
                        mp.erase(d);
                        q.push({d,c});
                    }
                }
            }
                
        }
        
        
        if(ans==INT_MAX)
            return 0;
        
        return ans;
    }
};