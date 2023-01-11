class Solution {
public:
    int vis[100005];
    set<vector<int>> s;
    
     void dfs(int i,int pr,vector<int> v[],vector<bool>& has,vector<vector<int>> &p)
    {
        
        if(has[i])
        {
            for(auto x:p)
            {
                s.insert(x);
            }
        }
        
        vis[i]=1;
        
        if(i!=0)
        p.push_back({pr,i});
        
        for(auto j:v[i])
        {
            if(!vis[j])
            {
                //cout<<i<<" "<<j<<endl;
                p.push_back({i,j});
                dfs(j,i,v,has,p);
                p.pop_back();
            }
        }
            
        if(i!=0)
        p.pop_back();
    }
    
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& has) {
        
         memset(vis,0,sizeof(vis));
        
        vector<int> v[n];
        
        for(auto x:edges)
        {
            v[x[0]].push_back(x[1]);
            v[x[1]].push_back(x[0]);
        }
        
        vector<vector<int>> p;
        
        dfs(0,0,v,has,p);
        
        return s.size()*2;
    }
};
