class Solution {
public:
    
    int vis[10005];
    
    void dfs(int j,vector<vector<int>>& s)
    {
        vis[j]=1;
        
        for(int i=0;i<s.size();i++)
        {
            if(!vis[i])
            {
                if(s[i][0]==s[j][0] || s[i][1]==s[j][1])
                {
                    dfs(i,s);
                }
            }
        }
    }
    
    int removeStones(vector<vector<int>>& s) {
        
        int n=s.size();
        int cc=0;
        
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                dfs(i,s);
                cc++;
            }
        }
        
        return n-cc;
    }
};