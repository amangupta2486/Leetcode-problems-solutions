class Solution {
public:
    bool judgeSquareSum(int c) {
        
        for(long int i=0;i*i<=c;i++)
        {
            long int b=c-(i*i);
            
            long int d=sqrt(b);
            
            if(d*d==b)
            {
                return 1;
            }
        }
        
        return 0;
    }
};