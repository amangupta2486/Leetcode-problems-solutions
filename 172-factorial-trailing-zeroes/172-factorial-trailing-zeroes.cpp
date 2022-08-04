class Solution {
public:
    int trailingZeroes(int n) {
        
        
        int c=0;
        
        /*
        int num=1;
        
        while(num*5<=n)
        {
            num=num*5;
            c++;
        }
        
        int ans=(c*(c-1))/2;
        
        return ans+(n/5)+(n/100)+(n/1000);
        */
        
        for(int i=5;i<=n;i+=5)
        {
            int num=i;
            while(num%5==0)
            {
                num=num/5;
                c++;
            } 
        }
        
        return c;
    }
};