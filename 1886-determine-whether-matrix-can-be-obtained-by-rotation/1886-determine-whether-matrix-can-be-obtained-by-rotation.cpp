class Solution {
public:
    bool findRotation(vector<vector<int>>& g, vector<vector<int>>& t) {
        
        int n=g.size();
        int m=g[0].size();
        
        if(g==t)
        {
            return 1;
        }
        
        vector<vector<int>> v=g;
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<m;j++)
            {
                swap(g[i][j],g[j][i]);
            }
        }
        
        vector<vector<int>> a=g;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m/2;j++)
            {
                swap(g[i][j],g[i][n-j-1]);
            }
        }
        
        int f=1;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(g[i][j]!=t[i][j])
                {
                    f=0;
                    break;
                }
            }
            
            if(f==0)
            {
                break;
            }
        }
        
        if(f)
        {
            return 1;
        }
        
        
        
        for(int j=0;j<m;j++)
        {
            for(int i=0;i<n/2;i++)
            {
                swap(a[i][j],a[n-i-1][j]);
            }
        }
        
        f=1;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(a[i][j]!=t[i][j])
                {
                    f=0;
                    break;
                }
            }
            
            if(f==0)
            {
                break;
            }
        }
        
        if(f)
        {
            return 1;
        }
        
        for(int j=0;j<m;j++)
        {
            for(int i=0;i<n/2;i++)
            {
                swap(v[i][j],v[n-i-1][j]);
            }
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n/2;j++)
            {
                swap(v[i][j],v[i][n-j-1]);
            }
        }
        
        f=1;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(v[i][j]!=t[i][j])
                {
                    f=0;
                    break;
                }
            }
            
            if(f==0)
            {
                break;
            }
        }
        
        if(f)
        {
            return 1;
        }
        
        return 0;
        
    }
};