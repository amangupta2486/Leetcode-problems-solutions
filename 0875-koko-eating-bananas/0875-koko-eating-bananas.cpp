class Solution {
public:
    int minEatingSpeed(vector<int>& p, int h) {
        
        int n=p.size();
        
        int l=1;
        
        int r=0;
        
        for(int i=0;i<n;i++)
        {
            r=max(r,p[i]);
        }
        
        int ans=0;
        
        while(l<=r)
        {
            int m=l+(r-l)/2;
            long c=0,s=0;
            
            for(int i=0;i<n;i++)
            {
                if(p[i]%m)
                {
                    c++;
                }
                
                c+=p[i]/m;
            }
            
            if(c<=h)
            {
                ans=m;
                r=m-1;
            }
            else
            {
                l=m+1;
            }
        }
        
        return ans;
    }
};