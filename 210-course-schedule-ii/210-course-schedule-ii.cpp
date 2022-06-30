class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& p) {
        
        vector<int> ind(n,0);
        vector<int> adj[n];
        
        for(auto i:p)
        {
            adj[i[1]].push_back(i[0]);
            ind[i[0]]++;
        }
        
        queue<int> q;
        vector<int> ans;
        
        for(int i=0;i<n;i++)
        {
            if(ind[i]==0)
            {
                q.push(i);
            }
        }
        
        while(!q.empty())
        {
            int k=q.size();
            
            while(k--)
            {
                auto p=q.front();
                q.pop();
                
                ans.push_back(p);
                
                for(auto x:adj[p])
                {
                    ind[x]--;
                    
                    if(ind[x]==0)
                    {
                        q.push(x);
                    }
                }
            }
        }
        
        vector<int> emp;
        
        return ans.size()==n ? ans : emp;
    }
};