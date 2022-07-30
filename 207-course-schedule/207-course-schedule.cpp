class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& p) {
        
        vector<int> d(n,0);
        
        vector<int> adj[n];
        
        for(auto i:p)
        {
            adj[i[0]].push_back(i[1]);
            d[i[1]]++;
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
        
        while(!q.empty())
        {
            int l=q.size();
            
            while(l--)
            {
                int r=q.front();
                q.pop();
                
                cnt++;
                
                for(auto x:adj[r])
                {
                    d[x]--;
                    
                    if(d[x]==0)
                    {
                        q.push(x);
                    }
                }
            }
        }
        
        return cnt==n ? 1 : 0;
    }
};