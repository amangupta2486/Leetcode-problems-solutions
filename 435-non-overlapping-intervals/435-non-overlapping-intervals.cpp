class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& r) {
         int n=r.size();
        
        sort(r.begin(),r.end());
        
        vector<int> p=r[0];
        int c=0;
        
        for(int i=1;i<n;i++)
        {
            if(r[i][0]>=p[1])
            {
                p=r[i];
            }
            else
            {
                p[1]=min(p[1],r[i][1]);
                c++;
            }
        }
        
        return c;
    }
};