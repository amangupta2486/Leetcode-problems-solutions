class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& p) {
        
        vector<int> v[n];
        
        vector<int> d(n,0);
        
        vector<int> ans;
        
        int c=0;
        
        for(auto i:p)
        {
            v[i[1]].push_back(i[0]);
            d[i[0]]++;
        }
        
        queue<int> q;
        
        for(int i=0;i<n;i++)
        {
            if(d[i]==0)
            {
                ans.push_back(i);
                q.push(i);
                c++;
            }
        }  
        
        while(!q.empty())
        {
            auto p=q.front();
            q.pop();
            
            for(auto i:v[p])
            {
                d[i]--;
                
                if(d[i]==0)
                {
                    ans.push_back(i);
                    q.push(i);
                    c++;
                }
            }
        }
        
        vector<int> b;
        
        return c==n ? ans : b;
    }
};