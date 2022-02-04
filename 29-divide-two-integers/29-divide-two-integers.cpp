class Solution {
public:
    int divide(int a, int b) {
        
        if(a==INT_MIN && b==-1)
        {
            return INT_MAX;
        }
        
        int s = a>0 ^ b>0 ? -1 :1;
        long x=abs(a);
        long y=abs(b);
        
        long ans=0;
        
        while(x>=y)
        {
            long t=y,m=1;
            
            while(t<<1 <= x)
            {
                t=t<<1;
                m=m<<1;
            }
            
            x-=t;
            ans+=m;
        }
        
        return s*ans;
    }
};