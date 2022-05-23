class Solution {
public:
    bool isPalindrome(int x) {
        
        int n=x;
        int s=0;
        int c=0;
        
        while(x>0)
        {
            c++;
            x=x/10;
        }
        
        int l=c/2;
        
        while(l--)
        {
            int p=n%10;
            s*=10;
            s+=p;
            n=n/10;
        }
        
        if(c&1)
        {
            n=n/10;
        }
        
        if(n==s)
        {
            return 1;
        }
        
        return 0;
    }
};