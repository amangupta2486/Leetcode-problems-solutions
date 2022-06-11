class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        
        if(n==1)
        {
            return {0};
        }
        vector<int> d(n,0);
        
        vector<int> v[n];
        
        for(auto i:edges)
        {
            v[i[0]].push_back(i[1]);
            v[i[1]].push_back(i[0]);
            d[i[0]]++;
            d[i[1]]++;
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