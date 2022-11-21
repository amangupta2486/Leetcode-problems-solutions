class Solution {
public:
    
    long long ans=0;
    
    int dfs(int i,int prev,vector<int> v[], int s,vector<int> &vis)
    {
        vis[i]=1;
        
        long long cnt=1;
        
        for(auto j:v[i])
        {
            if(!vis[j])
            {
                cnt+=dfs(j,i,v,s,vis);
            }
        }
        
        if(i!=0)
        {
            ans+=cnt/s;
        
            if(cnt%s)
            {
                ans++;
            }
        }
        
        
        return cnt;
    }
    
    long long minimumFuelCost(vector<vector<int>>& roads, int seats) {
        
        int n=roads.size();
        
        vector<int> v[n+1];
        vector<int> vis(n+1,0);
        
        for(auto x:roads)
        {
            v[x[0]].push_back(x[1]);
            v[x[1]].push_back(x[0]);
        }
        
        dfs(0,0,v,seats,vis);
        
        return ans;
    }
};