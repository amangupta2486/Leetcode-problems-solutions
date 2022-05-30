class Solution {
public:
    int divide(int divisor, int dividend) {
        
        int s=1;
        
        long div=divisor;
        long d=dividend;
        
        if(div==INT_MIN && d==-1)
        {
            return INT_MAX;
        }
        
        if(d==1 || d==-1)
        {
            return d*div;
        }
        
        return div/d;
        
        /*
        if(div<0)
        {
            s*=-1;
            div*=-1;
        }
        if(d<0)
        {
            s*=-1;
            d*=-1;
        }
        
        long c=0;
        
        while(div>=d)
        {
            div-=d;
            c++;
        }
        
        if(c>=INT_MAX)
        {
            return INT_MAX;
        }
        
      return s*c;
        */
    }
};