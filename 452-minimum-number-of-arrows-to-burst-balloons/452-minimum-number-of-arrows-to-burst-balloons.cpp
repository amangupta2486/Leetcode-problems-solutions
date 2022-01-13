class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& p) {
        
        int n=p.size();

        
        sort(p.begin(),p.end());
        int c=0;
        int prev_end=p[0][1];
        
        for(int i=1;i<n;i++)
        {
            if(p[i][0]>prev_end)
            {
                prev_end=p[i][1];
            }
            else
            {
                c++;
                prev_end=min(prev_end,p[i][1]);
            }
        }
        
        return n-c;
    }
};