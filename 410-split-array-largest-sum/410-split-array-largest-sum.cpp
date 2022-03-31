class Solution {
public:
    int splitArray(vector<int>& a, int k) {
        
        int n=a.size();
        
        int l=*max_element(a.begin(),a.end());
        int h=0;
        
        for(int i=0;i<n;i++)
        {
            h+=a[i];
        }
        
        int mi=0;
        
        while(l<=h)
        {
            int m = (l+h)/2;
            
            int s=0,mx=0,c=1;
            
            for(int i=0;i<n;i++)
            {
                s+=a[i];
                
                if(s>m)
                {
                    s=a[i];
                    c++;
                }
                
                mx=max(mx,s);
            }
            
            if(c<=k)
            {
                mi=m;
                h=m-1;
            }
            else
            {
                l=m+1;
            }
        }
        
        return mi;
    }
};