class Solution {
public:
    
    int check(vector<int>& a, int m,int n)
    {
        int c=1;
        int s=0;
        
        for(int i=0;i<n;i++)
        {
            s+=a[i];
            if(s>m)
            {
                s=a[i];
                c++;
            }
        }
        
        return c;
    }
    
    int splitArray(vector<int>& a, int k) {
        
        int n=a.size();
        
        int l=INT_MIN,r=0;
        
        for(int i=0;i<n;i++)
        {
            r+=a[i];
            l=max(l,a[i]);
           
        }
         int ans=0;
            
            while(l<=r)
            {
                int m=(l+r)/2;
                
                int p=check(a,m,n);
                
                if(p<=k)
                {
                   // cout<<m<<" ";
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