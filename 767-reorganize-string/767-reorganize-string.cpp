class Solution {
public:
    string reorganizeString(string s) {
        
        int n=s.size();
        
        map<char,int> m;
        
        for(auto i:s)
        {
            m[i]++;
        }
        
        
        priority_queue<pair<int,char>> q;
        
        for(auto i :m)
        {
            if(i.second > (n+1)/2)
            {
                return "";
            }
            
            q.push({i.second,i.first});
        }
        
        string ans="";
        
        while(q.size()>1)
        {
            auto p1=q.top();
            q.pop();
            
          
            auto p2=q.top();
            q.pop();
            
            
            ans= ans+ p1.second + p2.second;
            
            if(p1.first>1)
            {
                int d= p1.first -1;
                q.push({d,p1.second});
            }
            
            if(p2.first>1)
            {
                int d= p2.first -1;
                q.push({d,p2.second});
            }
        }
        
        if(q.size()==1)
        {
            auto p1=q.top();
            ans+= p1.second;
            q.pop();
        }
        return ans;
    }
};