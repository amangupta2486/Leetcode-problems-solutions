class Solution {
public:
    
    int v[1005];
    
    int find(int x)
    {
        while(v[x]!=x)
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
    vector<int> findRedundantConnection(vector<vector<int>>& e) {
        
        int n=e.size();
        
        for(int i=0;i<=n;i++)
        {
            v[i]=i;
        }
        
        for(auto i:e)
        {
            int a=i[0];
            int b=i[1];
            
            if(find(a)==find(b))
            {
                return i;
            }
            else
            {
                Union(a,b);
            }
        }
        
        return {};
    }
};