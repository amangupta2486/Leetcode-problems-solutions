class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& p) {
        
        vector<int> v[n];
        
        vector<int> d(n,0);
        
        for(auto x:p)
        {
            v[x[1]].push_back(x[0]);
            d[x[0]]++;
        }
        
        queue<int> q;
        
        for(int i=0;i<n;i++)
        {
            if(d[i]==0)
            {
                q.push(i);
            }
        }
        
        int c=0;
        
        while(!q.empty())
        {
            int k=q.size();
            
            while(k--)
            {
                auto r=q.front();
                q.pop();
                
                c++;
                
                for(auto x:v[r])
                {
                    d[x]--;
                    
                    if(d[x]==0)
                    {
                        q.push(x);
                    }
                }
            }
        }
        
        return c==n;
    }
};