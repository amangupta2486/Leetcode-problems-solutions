class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& i) {
        
        sort(i.begin(),i.end(),[&](auto &a,auto &b){
            return a[1]<b[1];
        });
        
        int n=i.size();
        
        vector<int> p=i[0];
        
        int c=0;
        
        for(int j=1;j<n;j++)
        {
            if(i[j][0]>=p[1])
            {
                p=i[j];
            }
            
            else
            {
                c++;
                p[1]=min(p[1],i[j][1]);
            }
        }
        
        return c;
    }
};