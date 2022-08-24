class Solution {
public:
    bool isPowerOfThree(int n) {
        
        int num =n;
        
        int c=0;
        
        while(num>2)
        {
            num=num/3;
            c++;
        }
        
        if(n==pow(3,c))
        {
            return 1;
        }
        
        return 0;
    }
};