class Solution {
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        
        if(n==1)
        {
            return 0;
        }
        
        vector<int> v[n];
        
        for(int i=0;i<n;i++)
        {
            if(manager[i]!=-1)
            v[manager[i]].push_back(i);
        }
        
        queue<vector<int>> q;
        
        q.push({headID,0});
        
        int ans=0;
        
        while(!q.empty())
        {
            int l=q.size();
            
            while(l--)
            {
                auto p=q.front();
                q.pop();
                
                int x=p[0];
                int c=p[1];
                
                c+=informTime[x];
                
                ans=max(ans,c);
                
                for(auto j:v[x])
                {
                    q.push({j,c});
                }
            }
        }
        
        return ans;
    }
};