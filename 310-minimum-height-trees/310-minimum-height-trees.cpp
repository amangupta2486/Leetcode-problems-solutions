class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& e) {
        
        if(n==1)
        {
            vector<int> v;
            v.push_back(0);
            
            return v;
        }
        vector<int> d(n,0);
        
        vector<int> v[n];
        
        for(auto i:e)
        {
            v[i[0]].push_back(i[1]);
            v[i[1]].push_back(i[0]);
            d[i[0]]++;
            d[i[1]]++;
        }
        
        queue<int> q;
        
        vector<int> ans;
        
        for(int i=0;i<n;i++)
        {
            if(d[i]==1)
            {
                q.push(i);
                ans.push_back(i);
                
            }
        }
        
        while(!q.empty())
        {
            int k=q.size();
            
            ans.clear();
            while(k--)
            {
                auto p=q.front();
                q.pop();
                ans.push_back(p);
                cout<<p;
                
                for(auto x : v[p])
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