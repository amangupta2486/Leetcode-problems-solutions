class Solution {
public:
    int maximumCandies(vector<int>& c, long long k) {
        
        long long s=0;
        
        int n=c.size();
        
        for(int i=0;i<n;i++)
        {
            s+=c[i];
        }
        
        if(s<k)
        {
            return 0;
        }
        
        int l=1,r=0;
        
        for(int i=0;i<n;i++)
        {
            r=max(r,c[i]);
        }
        
        int ans=0;
        
        while(l<=r)
        {
            int m=l+(r-l)/2;
            
            long long cnt=0;
            
            for(int i=0;i<n;i++)
            {
                cnt=cnt+(c[i]/m);
            }
            
            if(cnt>=k)
            {
                ans=m;
                l=m+1;
            }
            else
            {
                r=m-1;
            }
        }
        
        return ans;
    }
};