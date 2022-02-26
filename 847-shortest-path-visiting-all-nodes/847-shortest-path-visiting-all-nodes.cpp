class Solution {
public:
    int shortestPathLength(vector<vector<int>>& g) {
        
        int n=g.size();
        
        if(n==0)
            return 0;
        
        set<pair<int,int>> s;
        
        queue<vector<int>> q;
        
        for(int i=0;i<n;i++)
        {
            vector<int> v(3,0);
            
            int mask=(1<<i);
            
            v[0]=0;
            v[1]=i;
            v[2]=mask;
            
            q.push(v);
            s.insert({i,mask});
        }
        
        int ans=0;
        
        while(!q.empty())
        {
            auto p=q.front();
            q.pop();
            
            if(p[2]==(1<<n)-1)
            {
                ans=p[0];
                break;
            }
            
            for(auto j : g[p[1]])
            {
                int next = p[2] | (1<<j);
                
                if(s.find({j,next})==s.end())
                {
                    s.insert({j,next});
                    q.push({p[0]+1,j,next});
                }
            }
        }
        
        return ans;
    }
};