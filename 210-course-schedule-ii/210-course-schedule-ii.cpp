class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& p) {
        
        vector<int> v[n];
        
        vector<int> in(n,0);
        
        for(auto x:p)
        {
            v[x[0]].push_back(x[1]);
            v[x[1]].push_back(x[0]);
            in[x[0]]++;
        }
        
        queue<int> q;
        
        for(int i=0;i<n;i++)
        {
            if(in[i]==0)
            {
                q.push(i);
            }
        }
        
        int cnt=0;
        
        vector<int> ans,b;
        
        while(!q.empty())
        {
            int l=q.size();
            
            while(l--)
            {
                auto p=q.front();
                q.pop();
                
                ans.push_back(p);
                
                cnt++;
                
                for(auto x:v[p])
                {
                    in[x]--;
                    
                    if(in[x]==0)
                    {
                        q.push(x);
                    }
                }
            }
        }
        
        return cnt==n ? ans : b;
    }
};