class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& r) {
        
        vector<int> d(n,0);
        
        vector<int> v[n];
        
        for(auto x:r)
        {
            d[x[0]]++;d[x[1]]++;
            
            v[x[0]].push_back(x[1]);
            v[x[1]].push_back(x[0]);
        }
        
        int ans=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i!=j)
                {
                    int s=d[i]+d[j];
                    
                    for(auto x:v[i])
                    {
                        if(x==j)
                        {
                            s--;
                        }
                    }
                    
                    ans=max(ans,s);
                }
            }
        }
        
        return ans;
    }
};