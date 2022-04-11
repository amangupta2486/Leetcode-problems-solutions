class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& p) {
        
        vector<int> d(n,0);
        
        vector<int> v[n];
        
        for(auto i:p)
        {
            v[i[1]].push_back(i[0]);
            d[i[0]]++;
        }
        
        queue<int> q;
        int ans=0;
        vector<int> g,h;
        
        for(int i=0;i<n;i++)
        {
            if(d[i]==0)
            {
                q.push(i);
                g.push_back(i);
                ans++;
            }
        }
        
        while(!q.empty())
        {
            auto r=q.front();
            q.pop();
            
            for(auto x:v[r])
            {
                d[x]--;
                
                if(d[x]==0)
                {
                    q.push(x);
                    g.push_back(x);
                    ans++;
                }
            }
        }
        
       // cout<<ans<<endl;
        if(ans!=n)
            return h;
        
        return g;
    }
};