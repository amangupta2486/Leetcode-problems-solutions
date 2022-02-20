class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& a) {
        
        int n=a.size();
        
        int c=0;
        
        for(int i=0;i<n;i++)
        {
            int p=a[i][0];
            int q=a[i][1];
            int f=1;
            
            for(int j=0;j<n;j++)
            {
                int x=a[j][0];
                int y=a[j][1];
                
                if(i!=j && x<=p && y>=q)
                {
                    f=0;
                    break;
                }
            }
            
            if(f)
            {
                c++;
            }
        }
        
        return c;
    }
};