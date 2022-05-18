class Solution {
public:
    int numOfMinutes(int n, int h, vector<int>& mg, vector<int>& t) {
        
        queue<vector<int>> q;
        
        q.push({h,0});
        
        vector<int> v[n];
        
        for(int i=0;i<n;i++)
        {
            if(mg[i]!=-1)
            {
                v[mg[i]].push_back(i);
            }
        }
        
        vector<int> vis(n,0);
        vis[h]=1;
        
        int ans=0;
        
        while(!q.empty())
        {
            int k=q.size();
            
            while(k--)
            {
                auto p=q.front();
                q.pop();
                
                int x=p[0];
                int c=p[1];
                
                ans=max(ans,c);
                
                vis[x]=1;
                
                for(auto j:v[x])
                {
                    if(!vis[j])
                    {
                        q.push({j,c+t[x]});
                    }
                }
            }
        }
        
        return ans;
    }
};