class Solution {
public:
    int minCost(string s, vector<int>& t) {
        
        int n=s.size();
        
        int ans=0;
        
        for(int i=0;i<n-1;i++)
        {
            priority_queue<int,vector<int>,greater<int>> p;
            
            if(s[i]==s[i+1])
            {
                while(i+1<n && s[i]==s[i+1])
                {
                    p.push(t[i]);
                    i++;
                }
                
                p.push(t[i]);
            }
            
            while(p.size()>1)
            {
                ans+=p.top();
                p.pop();
            }
        }
        
        return ans;
    }
};