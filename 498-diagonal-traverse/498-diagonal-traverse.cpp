class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& g) {
        
        vector<vector<int>> ans;
        
        int n=g.size();
        int m=g[0].size();
        
        for(int i=0;i<n;i++)
        {
            vector<int> v;
            
            for(int x=i,y=0;x>=0 && y<m;x--,y++)
            {
                //cout<<g[x][y]<<" ";
                v.push_back(g[x][y]);
            }
            ans.push_back(v);
        }
        
        for(int j=1;j<m;j++)
        {
            vector<int> v;
            
             for(int x=n-1,y=j;x>=0 && y<m;x--,y++)
            {
                v.push_back(g[x][y]);
            }
            ans.push_back(v);
        }
        
        for(int i=0;i<ans.size();i++)
        {
            if(i&1)
            {
                reverse(ans[i].begin(),ans[i].end());
            }
            
        }
        
        vector<int> b;
        
        for(auto i:ans)
        {
            for(auto j:i)
            {
                b.push_back(j);
            }
        }
        
        return b;
    }
};