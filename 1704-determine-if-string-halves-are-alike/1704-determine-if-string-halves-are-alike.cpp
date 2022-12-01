class Solution {
public:
    
    bool check(char ch)
    {
        if( ch=='a'|| ch== 'e'|| ch== 'i'|| ch== 'o'|| ch== 'u'|| ch== 'A'|| ch== 'E'|| ch== 'I'|| ch== 'O'|| ch== 'U')
        {
            return 1;
        }
        
        return 0;
    }
    bool halvesAreAlike(string s) {
        
        int n=s.size();

        int c1=0,c2=0;
        
        for(int i=0;i<n/2;i++)
        {
            if(check(s[i]))
            {
                c1++;
            }
        }
        
        for(int i=n/2;i<n;i++)
        {
            if(check(s[i]))
            {
                c2++;
            }
        }
        
        return c1==c2;
    }
};