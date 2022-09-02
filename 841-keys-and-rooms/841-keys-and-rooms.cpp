class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        
        int n=rooms.size();
        
        vector<int> vis(n,0);
        
        int c=0;
        
        queue<int> q;
        
        for(auto i:rooms[0])
        {
            q.push(i);
            c++;
        }
        
        vis[0]=1;
        
        while(!q.empty())
        {
            int k=q.size();
            
            while(k--)
            {
                auto p=q.front();
                q.pop();
                
                if(!vis[p])
                {
                    vis[p]=1;
                    for(auto i:rooms[p])
                    {
                        if(!vis[i])
                        {
                            q.push(i);
                            c++;
                        }
                    }
                }
            }
        }
        
        for(int i=0;i<n;i++)
        {
            if(vis[i]==0)
            {
                return 0;
            }
        }
        
        return 1;
        cout<<c<<" "<<n<<endl;
        
        //return c==n ? 1 : 0;
    }
};