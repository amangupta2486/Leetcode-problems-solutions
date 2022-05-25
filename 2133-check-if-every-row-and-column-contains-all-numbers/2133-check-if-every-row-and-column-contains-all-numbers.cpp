class Solution {
public:
    bool checkValid(vector<vector<int>>& g) {
        
        int n=g.size();
        int m=g[0].size();

        for(int i=0;i<n;i++)
        {
            map<int,int> mp;
            
            for(int j=0;j<m;j++)
            {
                if(mp[g[i][j]]>0)
                {
                    return false;
                }
                
                 mp[g[i][j]]++;
            }
           
        }
        
        for(int j=0;j<m;j++)
        {
            map<int,int> mp;
            
            for(int i=0;i<n;i++)
            {
                if(mp[g[i][j]]>0)
                {
                    return false;
                }
                
                mp[g[i][j]]++;
            }
        }
        
        return true;
    }
};