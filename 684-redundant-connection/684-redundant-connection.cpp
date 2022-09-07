class Solution {
public:
    
    int v[1005];
    
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
        
        for(int i=0;i<=n;i++)
        {
            v[i]=i;
        }

        for(auto x:edges)
        {
            if(find(x[0])!=find(x[1]))
            {
                Union(x[0],x[1]);  
            }
            
            else
            {
                 return x;
            }
        }
        
        return {};
    }
};