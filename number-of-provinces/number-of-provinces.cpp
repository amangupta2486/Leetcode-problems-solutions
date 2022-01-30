class Solution {
public:
    
    vector<int> v;
    
  
    
    int find(int x)
    {
//         while(x!=v[x])
//         {
//             x=v[x];
//         }
        
//         return x;
        return v[x];
    }
    
    void Union(int x,int y)
    {
        int a=find(x);
        int b=find(y);
        
        // if(a!=b)
        // {
        //     v[b]=a;
        // }
        
        if(a!=b)
        {
            for(int i=0;i<v.size();i++)
            {
                if(v[i]==b)
                {
                    v[i]=a;
                }
            }
        }
    }
    int findCircleNum(vector<vector<int>>& a) {
        
        int n=a.size();
        int m=a[0].size();
        
        for(int i=0;i<n;i++)
        {
            v.push_back(i);
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(a[i][j]==1)
                {
                    Union(i,j);
                }
            }
        }
        
        int c=0;
        
        for(int i=0;i<n;i++)
        {
            if(v[i]==i)
            {
                c++;
            }
        }
        
        return c;
    }
};