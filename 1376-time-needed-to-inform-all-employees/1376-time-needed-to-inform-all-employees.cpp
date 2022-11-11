class Solution {
public:
    int numOfMinutes(int n, int h, vector<int>& man, vector<int>& inf) {
        
        vector<int> v[n];
        
        for(int i=0;i<n;i++)
        {
            if(man[i]!=-1)
            {
                v[man[i]].push_back(i);
            }
        }
        
        queue<vector<int>> q;
        
        q.push({h,0});
        
        int ans=0;
        
        while(!q.empty())
        {
            int l=q.size();
            
            while(l--)
            {
                auto p=q.front();
                q.pop();
                
                int head=p[0];
                int c=p[1];
                
                ans=max(ans,c);
                
                for(auto emp:v[head])
                {
                    q.push({emp,c+inf[head]});
                }
                
            }
        }
        
        return ans;
    }
};