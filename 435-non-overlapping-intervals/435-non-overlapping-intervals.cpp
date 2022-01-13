
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& p) {
        
        int n=p.size();
        
        vector<vector<int>> m;
        
        sort(p.begin(),p.end());
        
        int prev=p[0][1];
        int ans=0;
        
        for(int i=1;i<n;i++)
        {
            if(p[i][0]>=prev)
            {
                prev=p[i][1];
            }
            else
            {
                ans++;
                prev=min(prev,p[i][1]);
            }
        }
        
        return ans;
        
    }
};