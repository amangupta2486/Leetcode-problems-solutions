class Solution {
public:
    bool isHappy(int n) {
        
        if(n==1)
        {
            return 1;
        }
        
        int s=0;
        int t=100;
        
        while(t--)
        {
            while(n>0)
            {
                int p=n%10;
                s+=p*p;
                n=n/10;
            }
            
            if(s==1)
            {
                return 1;
            }
            
            n=s;
            s=0;
        }
        
        return 0;
    }
};