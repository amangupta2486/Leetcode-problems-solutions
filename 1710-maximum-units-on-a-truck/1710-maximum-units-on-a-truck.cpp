class Solution {
public:
    int maximumUnits(vector<vector<int>>& b, int t) {
        
        sort(b.begin(),b.end(),[&](auto &a,auto &b){
           return a[1]>b[1]; 
        });
        
        int n=b.size();
        
        int ans=0;
        
        for(int i=0;i<n;i++)
        {
            auto p=b[i];
            int x=p[0];
            int c=p[1];

            if(x<=t)
            {
                ans+= x*c;
                t-=x;
            }
            else
            {
                ans+=t*c;
                t=0;
            }
            
            if(t==0)
            {
                break;
            }
        }
        
        return ans;
    }
};