class Solution {
public:
    
    vector<vector<int>> col;
    
    void find(int i,int m,int cols,vector<int> v)
    {
        if(cols==0 || i==m)
        {
            if(cols==0)
            col.push_back(v);
            
            return;
        }
        
        v.push_back(i);
        find(i+1,m,cols-1,v);
        v.pop_back();
        
        find(i+1,m,cols,v);
        
    }
    
    int ans=0;
    
    void solve(vector<int> v,vector<vector<int>>& g)
    {
        int c=0;
        
        map<int,int> mp;
        
        for(auto x:v)
        {
            mp[x]++;
        }
        
        int n=g.size();
        int m=g[0].size();
        
        for(int i=0;i<n;i++)
        {
            int f=1;
            
            for(int j=0;j<m;j++)
            {
                if(g[i][j]==1 && mp[j]==0)
                {
                    f=0;
                    break;
                }
            }
            
            if(f)
            {
                c++;
            }
        }
        
        ans=max(ans,c);
    }
    
    int maximumRows(vector<vector<int>>& g, int cols) {
        
        int n=g.size();
        int m=g[0].size();
        
        vector<int> v;
        
        find(0,m,cols,v);
        
        for(auto x:col)
        {
            solve(x,g);
        }
        
        return ans;
    }
};