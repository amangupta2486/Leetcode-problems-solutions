class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        
        if(roads.size()<=1)
        {
            return roads.size();
        }
        
        vector<int> d(n,0);
        
        vector<int> v[n];
        
        for(auto x:roads)
        {
            v[x[0]].push_back(x[1]);
            v[x[1]].push_back(x[0]);
            
            d[x[0]]++;
            d[x[1]]++;
        }
        
        int ans=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i!=j)
                {
                    int f=0;
                    
                    for(auto x:v[i])
                    {
                        if(x==j)
                        {
                            f=1;
                            break;
                        }
                    }
                    
                    ans=max(ans,d[i]+d[j]-f);
                }
            }
            
        }
        
        return ans;
    }
};