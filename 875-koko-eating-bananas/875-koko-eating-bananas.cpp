class Solution {
public:
    int minEatingSpeed(vector<int>& p, int h) {
        
        int n=p.size();
        
        long long int l=1,r=0;
        
        for(int i=0;i<n;i++)
        {
            r+=p[i];
        }
        
        int ans=0;
        
        while(l<=r)
        {
            long long int m=(l+r)/2;
            
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