class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        
        
        if(n==1)
        {
            return {0};
        }
        
        vector<int> v[n];
        
        vector<int> d(n,0);
        
        for(auto x:edges)
        {
            v[x[0]].push_back(x[1]);
            v[x[1]].push_back(x[0]);
            d[x[0]]++;
            d[x[1]]++;
        }
        
        queue<int> q;
        
        for(int i=0;i<n;i++)
        {
            if(d[i]==1)
            {
                q.push(i);
            }
        }
        
        vector<int> ans; 
        
        while(!q.empty())
        {
            int k=q.size();
            
            ans.clear();
            
            while(k--)
            {
                auto p=q.front();
                q.pop();
                
                //cout<<p<<" ";
                
                ans.push_back(p);
                
                for(auto x:v[p])
                {
                    d[x]--;
                    
                    if(d[x]==1)
                    {
                        q.push(x);
                    }
                }
            }
        }
        
        return ans;
    }
};