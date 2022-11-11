class Solution {
public:
    
    int v[10005];
    
    int find(int x)
    {
        while(x!=v[x])
        {
            x=v[x];
        }
        
        return x;
    }
    
    void Union(int a,int b)
    {
        int x=find(a);
        int y=find(b);
        
        if(x!=y)
        {
            v[y]=x;
        }
    }
    
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        
        int n=edges.size();
        
        for(int i=1;i<=n;i++)
        {
            v[i]=i;
        }
        
        for(auto x:edges)
        {
            int a=x[0];
            int b=x[1];
            
            if(find(a)!=find(b))
            {
                Union(a,b);
            }
            
            else
            {
                return x;
            }
        }
        
        return {};
    }
};