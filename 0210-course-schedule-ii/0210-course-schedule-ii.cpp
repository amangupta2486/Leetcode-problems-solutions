class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& p) {
        
        vector<int> v[n];
        
        vector<int> d(n,0);
        
        for(int i=0;i<p.size();i++)
        {
            v[p[i][0]].push_back(p[i][1]);
            v[p[i][1]].push_back(p[i][0]);
            d[p[i][0]]++;
        }
        
        queue<int> q;
        
        for(int i=0;i<n;i++)
        {
            if(d[i]==0)
            {
                q.push(i);
            }
        }
        
        int cnt=0;
        
        vector<int> ans;
        
        while(!q.empty())
        {
            auto p=q.front();
            q.pop();
            
            ans.push_back(p);
            cnt++;
            
            for(auto x:v[p])
            {
                d[x]--;
                
                if(d[x]==0)
                {
                    q.push(x);
                }
            }
        }
        
        if(cnt==n)
        {
            return ans;
        }
        
        return {};
    }
};