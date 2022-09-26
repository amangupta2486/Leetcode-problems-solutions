class Solution {
public:

    int vis[26];
    
    bool dfs(char a,char b,map<char,vector<char>> &mp)
    {
        if(a==b)
        {
            return 1;
        }
        
        vis[a-'a']=1;
        
        for(auto x:mp[a])
        {
            if(!vis[x-'a'])
            {
                if(dfs(x,b,mp))
                {
                    return 1;
                }
            }
        }
        
        return 0;
    }
    
    bool equationsPossible(vector<string>& eq) {
        
        sort(eq.begin(),eq.end(),[&](auto &a,auto &b){
            return a[1]>b[1];
        });
        
        map<char,vector<char>> mp;
        
        for(auto x:eq)
        {
            //cout<<x<<" ";
            
            if(x[1]=='=')
            {
                
                if(x[0]==x[3])
                {
                    continue;
                }
                
                mp[x[0]].push_back(x[3]);
                mp[x[3]].push_back(x[0]);
                
            }
            else
            {
                
                if(x[0]==x[3])
                {
                    return 0;
                }
                
                memset(vis,0,sizeof(vis));
                
                if(dfs(x[0],x[3],mp))
                {
                    return 0;
                }
                
                memset(vis,0,sizeof(vis));
                
                if(dfs(x[3],x[0],mp))
                {
                    return 0;
                }
            }
        }
        
        //cout<<endl;
        
        return 1;
    }
};