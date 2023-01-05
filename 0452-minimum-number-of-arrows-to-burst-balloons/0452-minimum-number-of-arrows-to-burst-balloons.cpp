class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& p) {
        
        sort(p.begin(),p.end());
        
        int n=p.size();
        
        auto prev=p[0];
        int overlap=0;
        
        for(int i=1;i<n;i++)
        {
            if(p[i][0]>prev[1])
            {
                prev=p[i];
            }
            else
            {
                prev[1]=min(prev[1],p[i][1]);
                overlap++;
            }
        }
        
        return n-overlap;
    }
};