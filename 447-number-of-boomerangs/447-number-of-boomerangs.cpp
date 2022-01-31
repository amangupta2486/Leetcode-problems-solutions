class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& p) {
        
        int n=p.size();
        
        int c=0;
        
       
        
        for(int i=0;i<n;i++)
        {

            map<long,int> m;
            
            for(int j=0;j<n;j++)
            {
                if(i!=j)
                {
                    int d = ((p[i][0]-p[j][0])*(p[i][0]-p[j][0])) + ((p[i][1]-p[j][1])*(p[i][1]-p[j][1]));
                    
                    m[d]++;
                }
            }
            
             for(auto i:m)
            {
                if(i.second>1)
                {
                    int g=i.second;
                    // cout<<i.first<<" "<<g<<" ";
                    int q=g*(g-1);

                    c+=q;
                }
            }
        }
        
        
        return c;
    }
};