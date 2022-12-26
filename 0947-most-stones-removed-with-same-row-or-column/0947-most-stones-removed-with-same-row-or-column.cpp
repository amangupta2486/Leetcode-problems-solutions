class Solution {
public:
    int vis[10005];
    
    void dfs(int i,vector<vector<int>>& st)
    {
        vis[i]=1;
        
        for(int j=0;j<st.size();j++)
        {
            if(!vis[j])
            {
                if(st[i][0]==st[j][0] || st[i][1]==st[j][1])
                {
                    dfs(j,st);
                }
            }
        }
    }
    
    int removeStones(vector<vector<int>>& st) {
        
        int n=st.size();
        memset(vis,0,sizeof(vis));
        
        int cc=0;
        
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                dfs(i,st);
                cc++;
            }
        }
        
        return n-cc;
    }
};