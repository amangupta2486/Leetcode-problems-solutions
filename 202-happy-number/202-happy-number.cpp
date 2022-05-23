class Solution {
public:
    bool isHappy(int n) {
        
        int f=0;
        
        int t=10;
        while(t--)
        {
            int s=0;
            
            while(n>0)
            {
                int p=n%10;
                s+=(p*p);
                n=n/10;
            }
            
            if(s==1)
            {
                f=1;
                break;
            }
            
            n=s;
        }
        
        return f;
    }
};