class Solution {
public:
    int reverse(int x) {
        
        int s=1;
        
        if(x==INT_MIN || x==INT_MAX)
        {
            return 0;
        }
        
        if(x<0)
        {
            s=-1;
            x=x*-1;
        }
        
        long r=0;
        
        while(x>0)
        {
            if(r*10>INT_MAX)
            {
                return 0;
            }
            
            r=(r*10)+x%10;
            x=x/10;
        }
        
        if(r>INT_MAX)
        {
            return 0;
        }
        
        return s*r;
    }
};

//1534236469