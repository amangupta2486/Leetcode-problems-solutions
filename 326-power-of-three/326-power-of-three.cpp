class Solution {
public:
    bool isPowerOfThree(int n) {
        
        if(n<=0)
        {
            return 0;
        }
        
        int x=0,m=n;
        
        while(m>2)
        {
            x++;
            m=m/3;
        }
        
        return pow(3,x)==n ? 1 :0;
    }
};