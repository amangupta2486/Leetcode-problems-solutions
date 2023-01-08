class Solution {
public:
    int maxPoints(vector<vector<int>>& p) {
        
        int n=p.size(),ans=0;
        
        for(int i=0;i<n;i++)
        {
            int same=0;
            map<double,int> mp;
            
            for(int j=0;j<n;j++)
            {
                if(p[j][1]==p[i][1] && p[j][0]==p[i][0])
                {
                    same++;
                }
                
                else if(p[j][0]==p[i][0])
                {
                    mp[INT_MAX]++;
                }
                
                else
                {
                    double y=p[j][1]-p[i][1];
                    double x=p[j][0]-p[i][0];
                    
                    double d=y/x;
                    
                    mp[d]++;
                }
                
            }
            
            int lmx=0;
            
            for(auto x:mp)
            {
                lmx=max(lmx,x.second);
            }
            
            lmx+=same;
            
            ans=max(ans,lmx);
        }
        
        return ans;
    }
};