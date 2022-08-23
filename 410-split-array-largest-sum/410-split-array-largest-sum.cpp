class Solution {
public:
    int splitArray(vector<int>& a, int m) {
        
        int n=a.size();
        
        int l=a[0],r=0;
        
        for(int i=0;i<n;i++)
        {
            l=max(l,a[i]);
            r+=a[i];
        }
        
        int ans=-1;
        
        while(l<=r)
        {
            int mid=(l+r)/2;
            
            int c=1,s=0;
            
            for(int i=0;i<n;i++)
            {
                if(s+a[i]<=mid)
                {
                    s+=a[i];
                }
                else
                {
                    c++;
                    s=a[i];
                }
            }
            
            if(c<=m)
            {
                 ans=mid;
                 r=mid-1;
            }
            else
            {
                l=mid+1;
            }
            
           
        }
        
         return ans;
    }
};