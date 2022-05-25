class Solution {
public:
    int splitArray(vector<int>& a, int k) {
        
        int n=a.size();
        
        int l=0,r=0;
        
        for(int i=0;i<n;i++)
        {
            l=max(l,a[i]);
            r+=a[i];
        }
        
        int ans=r;
        
        while(l<=r)
        {
            int m=(l+r)/2;
            
            int s=0,c=1;
            
            for(int i=0;i<n;i++)
            {
                if(s+a[i]<=m)
                {
                    s+=a[i];
                }
                else
                {
                    s=a[i];
                    c++;
                }
            }
            
            if(c<=k)
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