class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& in) {
        
        int n=in.size();
        
        sort(in.begin(),in.end());
        
        auto p=in[0];
        int c=0;
        
        for(int i=1;i<n;i++)
        {
            if(in[i][0]>=p[1])
            {
                p=in[i];
            }
            else
            {
                p[1]=min(p[1],in[i][1]);
                c++;
            }
        }
        
        return c;
    }
};