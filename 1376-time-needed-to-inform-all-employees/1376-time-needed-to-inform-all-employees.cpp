class Solution {
public:
    int numOfMinutes(int n, int h, vector<int>& m, vector<int>& t) {
        
        vector<int> v[n];
        
        for(int i=0;i<n;i++)
        {
            if(m[i]!=-1)
            v[m[i]].push_back(i);
        }
        
        queue<vector<int>> q;
        
        q.push({h,0});
        
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
   
                for(auto j:v[r])
                q.push({j,c+t[r]});
                
            }
        }
        
        return ans;
    }
};