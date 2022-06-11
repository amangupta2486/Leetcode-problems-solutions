class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        
        int n=numCourses;
        
        vector<int> d(n,0);
        vector<int> v[n];
        
        for(auto i:prerequisites)
        {
            v[i[1]].push_back(i[0]);
            d[i[0]]++;
        }
        
        queue<int> q;
        
        for(int i=0;i<n;i++)
        {
            if(d[i]==0)
            {
                q.push(i);
            }
        }
        
        int cnt=0;
        
        while(!q.empty())
        {
            int k=q.size();
            while(k--)
            {
                auto p=q.front();
                q.pop();
                
                cnt++;
                
                for(auto x:v[p])
                {
                    d[x]--;
                    if(d[x]==0)
                    {
                        q.push(x);
                    }
                }
            }
        }
        
        return cnt==n ? 1 :0 ;
    }
};