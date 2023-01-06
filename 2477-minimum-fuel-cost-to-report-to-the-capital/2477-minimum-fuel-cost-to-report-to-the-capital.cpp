class Solution {
public:
    long long minimumFuelCost(vector<vector<int>>& r, int s) {
        
        int n=r.size()+1;
        vector<int> d(n,0),p(n,1);
        p[0]=1;
        vector<int> v[n];
        
        for(auto x:r)
        {   
            v[x[0]].push_back(x[1]);
            v[x[1]].push_back(x[0]);
            d[x[0]]++;
            d[x[1]]++;
        }
        
        queue<int> q;
        
        for(int i=1;i<n;i++)
        {
            if(d[i]==1)
            {
                q.push(i);
            }
        }
        
        long long ans=0;
        
        while(!q.empty())
        {
            int l=q.size();
            
            while(l--)
            {
                auto t=q.front();
                q.pop();
                
                if(t!=0)
                {
                    //cout<<t<<" ";
                    ans+=p[t]/s;
                    
                    if(p[t]%s)
                        ans++;
                }
                
                for(auto x:v[t])
                {
                    if(x!=0)
                    {
                         d[x]--;
                        p[x]+=p[t];

                        if(d[x]==1)
                        {
                            q.push(x);
                        }
                    }
                   
                }
            }
        }
        
        return ans;
    }
};