class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& g) {
        
        int n=g.size();
        int m=g[0].size();
        
        int x=m;

        //vector<vector<int>> v;
        
        for(int j=0;j<m;j++)
        {
            int k=j;
            int i=0;
            vector<vector<int>> b;
            vector<int> a;
            
           // cout<<i<<","<<k<<" ";
            while(k<m && i<n)
            {
                a.push_back(g[i][k]);
                b.push_back({i,k});
                //cout<<g[i][k]<<" ";
                k++;
                i++;
                
            }
            
            //cout<<endl;
            sort(a.begin(),a.end());
            
           // for(a)
            //v.push_back(a);
            
            int y=0;
            
            for(auto i:a)
            {
                g[b[y][0]][b[y][1]]=i;
                y++;
            }
            
        }
        
        for(int i=1;i<n;i++)
        {
            int k=i;
            int j=0;
            
            vector<vector<int>> b;
            vector<int> a;
            
            while(k<n && j<m)
            {
                a.push_back(g[k][j]);
                b.push_back({k,j});
                //cout<<g[k][j]<<" ";
                k++;
                j++;
                
            }
            
            //cout<<endl;
            sort(a.begin(),a.end());
            
            //for(a)
            //v.push_back(a);
            
            int y=0;
            
            for(auto i:a)
            {
                g[b[y][0]][b[y][1]]=i;
                y++;
            }
        }
        
        
        return g;
    }
};