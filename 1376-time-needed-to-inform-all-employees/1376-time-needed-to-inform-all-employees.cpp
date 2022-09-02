class Solution {
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        
        vector<int> v[n];
        
        for(int i=0;i<n;i++)
        {
            if(manager[i]!=-1)
            {
                v[manager[i]].push_back(i);
            }
        }
        
        queue<vector<int>> q;
        
        q.push({headID,0});
        
        int ans=0;
        
        while(!q.empty())
        {
            int k=q.size();
            
            while(k--)
            {
                auto p=q.front();
                q.pop();
                
                int r=p[0];
                int c=p[1];
                
                ans=max(ans,c);
                
                for(auto x:v[r])
                {
                    q.push({x,c+informTime[r]});
                }
            }
        }
        
        return ans;
    }
};