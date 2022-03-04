class Solution {
public:
    int shortestPathLength(vector<vector<int>>& g) {
        
        int n=g.size();
        
        queue<vector<int>> q;
        
        set<pair<int,int>> s;
        
        for(int i=0;i<n;i++)
        {
            vector<int> v(3,0);
            
            v[0]=0;
            v[1]=i;
            
            int mask =1<<i;
            
            v[2]=mask;
            s.insert({i,mask});
            
            q.push(v);
        }
        
        int f=1,ans=0;
        
        while(!q.empty())
        {
            int k=q.size();
            
            while(k--)
            {
                auto p=q.front();
                q.pop();
                
                int c=p[0];
                int i=p[1];
                int mask=p[2];
                //cout<<c<<" ";
                if(mask == (pow(2,n))-1)
                {
                    ans=c;
                    f=0;
                    break;
                }
                
                for(auto j:g[i])
                {
                    int next = mask | 1<<j;
                    
                    if(s.find({j,next})==s.end())
                    {
                        s.insert({j,next});
                        q.push({c+1,j,next});
                    }
                }
            }
            
            if(f==0)
            {
                break;
            }
        }
        
        return ans;
    }
};