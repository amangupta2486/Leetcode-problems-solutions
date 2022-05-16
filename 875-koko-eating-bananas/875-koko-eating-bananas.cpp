class Solution {
public:
    int minEatingSpeed(vector<int>& a, int h) {
        int l=1;
        int r=0;
        int n=a.size();
        
        for(int i=0;i<n;i++)
        {
            r=max(r,a[i]);
        }
        
        int ans=INT_MAX;
        
        while(l<=r)
        {
            int m=(l+r)/2;
            
            int c=0,s=0;
            
            for(int i=0;i<n;i++)
            {
                c+=(a[i]/m);
                
                if(a[i]%m)
                {
                    c++;
                }
            }
           // cout<<c<<" ";
            
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