class Solution {
public:
    

  

    bool validPath(int n, vector<vector<int>>& p, int s, int d) {
        
        if(s==d)
        {
            return true;
        }
        
        vector<int> g[200005];
        bool vis[200005]={0};
    
    
        for(auto i:p)
        {
            g[i[0]].push_back(i[1]);
            g[i[1]].push_back(i[0]);
        }
        
        queue<int> q;
        q.push(s);
        
        while(!q.empty())
        {
            int k=q.size();
            
            while(k--)
            {
                int r = q.front();
                q.pop();
                
                vis[r]=1;
                
                if(r==d)
                {
                    return true;
                }
                
                for(auto i: g[r])
                {
                    if(!vis[i])
                    q.push(i);
                }
            }
        }
       
    return false;
    }
};