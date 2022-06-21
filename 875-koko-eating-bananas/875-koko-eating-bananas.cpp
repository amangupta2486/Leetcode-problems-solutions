class Solution {
public:
    int minEatingSpeed(vector<int>& p, int h) {
        
        long long l=1,r=0;
        int n=p.size();
        
        for(int i=0;i<n;i++)
        {
            r+=p[i];
        }
        
        while(l<r)
        {
            long long m=(l+r)/2;
            
            int c=0;
            
            for(int i=0;i<n;i++)
            {
                c+=p[i]/m;
                
                if(p[i]%m)
                {
                    c++;
                }
            }
            
            if(c<=h)
            {
                r=m;
            }
            else
            {
                l=m+1;
            }
        }
        
        return r;
    }
};